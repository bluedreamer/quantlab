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
      printf("\tREQUIRE(market.FindInstrument(\"%s\").GetTotalVolume() == %d);\n", symbol, total_volume[symbol]);
   }
}
