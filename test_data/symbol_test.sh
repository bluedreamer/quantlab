awk -f pre_calc_test_results.awk input.csv | awk '{print "REQUIRE(\"" $1 "\" == symbols[index++]);" }' | sort
