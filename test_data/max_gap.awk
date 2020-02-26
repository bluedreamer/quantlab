BEGIN {
   FS=",";
}
{
# <TimeStamp>,<Symbol>,<Quantity>,<Price>
   if(last_time[$2] != 0)
   {
      diff = $1 - last_time[$2];
      if(diff > gap[$2])
      {
         gap[$2]=diff;
      }
   }
   last_time[$2]=$1;
}
END {
   for(symbol in gap)
   {
      printf("\tREQUIRE(market.FindInstrument(\"%s\").GetLargestTradeGap() == %d);\n", symbol, gap[symbol]);
   }
}
