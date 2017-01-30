#!/bin/bash
prepare_test(){
  test_file=$1
  test_file=$(basename "$test_file")

  # Find the name of the setup and cleanup scripts
  scripts=$(echo "$test_file" | cut -d '#' -f2)
  setup_script=$(echo "$scripts" | cut -d '.' -f2)
  cleanup_script=$(echo "$scripts" | cut -d '.' -f3)

  # Generate the contents of the script
  cat "setup${setup_script}" "${test_file}" "cleanup${cleanup_script}" | sponge ${test_file}
  chmod +x ${test_file}
}

# Find and prepare each test
pushd inputs
for test in $(ls -1 ./*.test); do
  test=$(echo "$test" | sed 's#./##')
  prepare_test ${test}
done
