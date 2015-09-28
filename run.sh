BENCHMARKS="svr-look"
RUNS=50 # should be a command-line argument.

# Should find a list of benchmarks.

# Generate an identifier for this set of runs.
id=$(date +%s)

# Process each of the benchmarks.
for benchmark in $(echo $BENCHMARKS)
do
  echo "Starting runs for benchmark: $benchmark"

  # Clear the cache and instrumentation information.
  rm -rf coverage*
  rm -rf repair.cache

  for ((i=0; i < RUNS; i++))
  do
    echo "Running: $benchmark (seed $i)";
    ./run_one.sh $benchmark $i &> /dev/null
  done
done
