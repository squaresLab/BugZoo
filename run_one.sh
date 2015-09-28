benchmark=$1
set_id=$2
seed=$3

# Generate the path of the log and test files for this run.
log="results/$benchmark/$set_id/$seed.log"
test_script="benchmarks/$benchmark/test.sh"
program_file="benchmarks/$benchmark/program.txt"

# Build the "true" configuration file for this problem.
cp "benchmarks/configuration.base" "benchmarks/$benchmark/configuration.full"
cat "benchmarks/configuration.base" >> "benchmarks/$benchmark/configuration.full"

# Create the results and debug directories.
mkdir -p "results/$benchmark/$set_id"
mkdir -p "debug/$benchmark/$set_id"

# Call GenProg!
genprog "benchmarks/$benchmark/configuration.full" \
  --seed $seed \
  --log-file $log \
  --test-script $test_script \
  --program $program_file

# Do a little tidying up.
rm -f repair.sanity
rm -f repair.sanity.c
rm -rf $seed
rm -f repair.c

# We DO NOT destroy the cache or coverage information!
# rm -rf coverage*
# rm -rf repair.cache

# Move the debug file.
mv "repair.debug.$seed" "debug/$benchmark/$set_id"
