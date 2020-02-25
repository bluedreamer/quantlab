BEGIN {
   FS=",";
}
{
# <TimeStamp>,<Symbol>,<Quantity>,<Price>
   total_volume[$2]+=$3;
   dollars_traded[$2]+=$3 * $4;
   if($4 > max_price[$2])
   {
      max_price[$2]=$4;
   }
}
END {
   for(symbol in total_volume)
   {
      printf("%s total_volume=%d max_trade=%d weighted_avg=%f\n", symbol, total_volume[symbol], max_price[symbol], 
         dollars_traded[symbol] / total_volume[symbol]);
   }
}
