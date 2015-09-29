benchmark=$1
runs=$2

# Generate an identifier for this set of runs.
id=$(date +%s)

# Process each of the benchmarks.
echo "Starting runs for benchmark: $benchmark"
./clean.sh
for ((i=0; i < $runs; i++))
do
  echo "Running: $benchmark (seed $i)";
  ./run_one.sh $benchmark $id $i &> /dev/null
done
./clean.sh
echo "Finished runs for benchmark: $benchmark"
