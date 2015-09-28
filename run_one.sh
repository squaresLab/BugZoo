benchmark=$1
set_id=$2
seed=$3

# Build the "true" configuration file for this problem.
cp "benchmarks/configuration.base" "benchmarks/$benchmark/configuration.full"
cat "benchmarks/$benchmark/configuration.base" >> "benchmarks/$benchmark/configuration.full"

# Create the results and debug directories.
mkdir -p "results/$benchmark/$set_id"
mkdir -p "debug/$benchmark/$set_id"

# Call GenProg!
genprog "benchmarks/$benchmark/configuration.full" \
  --seed $seed \
  --log-file "results/$benchmark/$set_id/$seed.log" \
  --prefix "benchmarks/$benchmark/" \
  --test-script "benchmarks/$benchmark/test.sh"

# Move the debug file.
mv "repair.debug.$seed" "debug/$benchmark/$set_id"
