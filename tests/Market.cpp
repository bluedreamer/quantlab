#include <iostream>
#include <fstream>

#include <catch2/catch.hpp>
#include "../CSVParser.h"
#include "../Market.h"

TEST_CASE("Test parsing of input file", "[market]")
{
   std::ifstream in("test_data/input.csv");
   auto parser = std::make_unique<CSVParser>(in);

   Market market(std::move(parser));

   market.Process();

   REQUIRE(market.MessageCount() == 20391);
   auto symbols = market.GetSymbols();
   REQUIRE(symbols.size() == 343);
   size_t index = 0;

   REQUIRE("aaa" == symbols[index++]);
   REQUIRE("aab" == symbols[index++]);
   REQUIRE("aac" == symbols[index++]);
   REQUIRE("aad" == symbols[index++]);
   REQUIRE("aae" == symbols[index++]);
   REQUIRE("aaf" == symbols[index++]);
   REQUIRE("aag" == symbols[index++]);
   REQUIRE("aba" == symbols[index++]);
   REQUIRE("abb" == symbols[index++]);
   REQUIRE("abc" == symbols[index++]);
   REQUIRE("abd" == symbols[index++]);
   REQUIRE("abe" == symbols[index++]);
   REQUIRE("abf" == symbols[index++]);
   REQUIRE("abg" == symbols[index++]);
   REQUIRE("aca" == symbols[index++]);
   REQUIRE("acb" == symbols[index++]);
   REQUIRE("acc" == symbols[index++]);
   REQUIRE("acd" == symbols[index++]);
   REQUIRE("ace" == symbols[index++]);
   REQUIRE("acf" == symbols[index++]);
   REQUIRE("acg" == symbols[index++]);
   REQUIRE("ada" == symbols[index++]);
   REQUIRE("adb" == symbols[index++]);
   REQUIRE("adc" == symbols[index++]);
   REQUIRE("add" == symbols[index++]);
   REQUIRE("ade" == symbols[index++]);
   REQUIRE("adf" == symbols[index++]);
   REQUIRE("adg" == symbols[index++]);
   REQUIRE("aea" == symbols[index++]);
   REQUIRE("aeb" == symbols[index++]);
   REQUIRE("aec" == symbols[index++]);
   REQUIRE("aed" == symbols[index++]);
   REQUIRE("aee" == symbols[index++]);
   REQUIRE("aef" == symbols[index++]);
   REQUIRE("aeg" == symbols[index++]);
   REQUIRE("afa" == symbols[index++]);
   REQUIRE("afb" == symbols[index++]);
   REQUIRE("afc" == symbols[index++]);
   REQUIRE("afd" == symbols[index++]);
   REQUIRE("afe" == symbols[index++]);
   REQUIRE("aff" == symbols[index++]);
   REQUIRE("afg" == symbols[index++]);
   REQUIRE("aga" == symbols[index++]);
   REQUIRE("agb" == symbols[index++]);
   REQUIRE("agc" == symbols[index++]);
   REQUIRE("agd" == symbols[index++]);
   REQUIRE("age" == symbols[index++]);
   REQUIRE("agf" == symbols[index++]);
   REQUIRE("agg" == symbols[index++]);
   REQUIRE("baa" == symbols[index++]);
   REQUIRE("bab" == symbols[index++]);
   REQUIRE("bac" == symbols[index++]);
   REQUIRE("bad" == symbols[index++]);
   REQUIRE("bae" == symbols[index++]);
   REQUIRE("baf" == symbols[index++]);
   REQUIRE("bag" == symbols[index++]);
   REQUIRE("bba" == symbols[index++]);
   REQUIRE("bbb" == symbols[index++]);
   REQUIRE("bbc" == symbols[index++]);
   REQUIRE("bbd" == symbols[index++]);
   REQUIRE("bbe" == symbols[index++]);
   REQUIRE("bbf" == symbols[index++]);
   REQUIRE("bbg" == symbols[index++]);
   REQUIRE("bca" == symbols[index++]);
   REQUIRE("bcb" == symbols[index++]);
   REQUIRE("bcc" == symbols[index++]);
   REQUIRE("bcd" == symbols[index++]);
   REQUIRE("bce" == symbols[index++]);
   REQUIRE("bcf" == symbols[index++]);
   REQUIRE("bcg" == symbols[index++]);
   REQUIRE("bda" == symbols[index++]);
   REQUIRE("bdb" == symbols[index++]);
   REQUIRE("bdc" == symbols[index++]);
   REQUIRE("bdd" == symbols[index++]);
   REQUIRE("bde" == symbols[index++]);
   REQUIRE("bdf" == symbols[index++]);
   REQUIRE("bdg" == symbols[index++]);
   REQUIRE("bea" == symbols[index++]);
   REQUIRE("beb" == symbols[index++]);
   REQUIRE("bec" == symbols[index++]);
   REQUIRE("bed" == symbols[index++]);
   REQUIRE("bee" == symbols[index++]);
   REQUIRE("bef" == symbols[index++]);
   REQUIRE("beg" == symbols[index++]);
   REQUIRE("bfa" == symbols[index++]);
   REQUIRE("bfb" == symbols[index++]);
   REQUIRE("bfc" == symbols[index++]);
   REQUIRE("bfd" == symbols[index++]);
   REQUIRE("bfe" == symbols[index++]);
   REQUIRE("bff" == symbols[index++]);
   REQUIRE("bfg" == symbols[index++]);
   REQUIRE("bga" == symbols[index++]);
   REQUIRE("bgb" == symbols[index++]);
   REQUIRE("bgc" == symbols[index++]);
   REQUIRE("bgd" == symbols[index++]);
   REQUIRE("bge" == symbols[index++]);
   REQUIRE("bgf" == symbols[index++]);
   REQUIRE("bgg" == symbols[index++]);
   REQUIRE("caa" == symbols[index++]);
   REQUIRE("cab" == symbols[index++]);
   REQUIRE("cac" == symbols[index++]);
   REQUIRE("cad" == symbols[index++]);
   REQUIRE("cae" == symbols[index++]);
   REQUIRE("caf" == symbols[index++]);
   REQUIRE("cag" == symbols[index++]);
   REQUIRE("cba" == symbols[index++]);
   REQUIRE("cbb" == symbols[index++]);
   REQUIRE("cbc" == symbols[index++]);
   REQUIRE("cbd" == symbols[index++]);
   REQUIRE("cbe" == symbols[index++]);
   REQUIRE("cbf" == symbols[index++]);
   REQUIRE("cbg" == symbols[index++]);
   REQUIRE("cca" == symbols[index++]);
   REQUIRE("ccb" == symbols[index++]);
   REQUIRE("ccc" == symbols[index++]);
   REQUIRE("ccd" == symbols[index++]);
   REQUIRE("cce" == symbols[index++]);
   REQUIRE("ccf" == symbols[index++]);
   REQUIRE("ccg" == symbols[index++]);
   REQUIRE("cda" == symbols[index++]);
   REQUIRE("cdb" == symbols[index++]);
   REQUIRE("cdc" == symbols[index++]);
   REQUIRE("cdd" == symbols[index++]);
   REQUIRE("cde" == symbols[index++]);
   REQUIRE("cdf" == symbols[index++]);
   REQUIRE("cdg" == symbols[index++]);
   REQUIRE("cea" == symbols[index++]);
   REQUIRE("ceb" == symbols[index++]);
   REQUIRE("cec" == symbols[index++]);
   REQUIRE("ced" == symbols[index++]);
   REQUIRE("cee" == symbols[index++]);
   REQUIRE("cef" == symbols[index++]);
   REQUIRE("ceg" == symbols[index++]);
   REQUIRE("cfa" == symbols[index++]);
   REQUIRE("cfb" == symbols[index++]);
   REQUIRE("cfc" == symbols[index++]);
   REQUIRE("cfd" == symbols[index++]);
   REQUIRE("cfe" == symbols[index++]);
   REQUIRE("cff" == symbols[index++]);
   REQUIRE("cfg" == symbols[index++]);
   REQUIRE("cga" == symbols[index++]);
   REQUIRE("cgb" == symbols[index++]);
   REQUIRE("cgc" == symbols[index++]);
   REQUIRE("cgd" == symbols[index++]);
   REQUIRE("cge" == symbols[index++]);
   REQUIRE("cgf" == symbols[index++]);
   REQUIRE("cgg" == symbols[index++]);
   REQUIRE("daa" == symbols[index++]);
   REQUIRE("dab" == symbols[index++]);
   REQUIRE("dac" == symbols[index++]);
   REQUIRE("dad" == symbols[index++]);
   REQUIRE("dae" == symbols[index++]);
   REQUIRE("daf" == symbols[index++]);
   REQUIRE("dag" == symbols[index++]);
   REQUIRE("dba" == symbols[index++]);
   REQUIRE("dbb" == symbols[index++]);
   REQUIRE("dbc" == symbols[index++]);
   REQUIRE("dbd" == symbols[index++]);
   REQUIRE("dbe" == symbols[index++]);
   REQUIRE("dbf" == symbols[index++]);
   REQUIRE("dbg" == symbols[index++]);
   REQUIRE("dca" == symbols[index++]);
   REQUIRE("dcb" == symbols[index++]);
   REQUIRE("dcc" == symbols[index++]);
   REQUIRE("dcd" == symbols[index++]);
   REQUIRE("dce" == symbols[index++]);
   REQUIRE("dcf" == symbols[index++]);
   REQUIRE("dcg" == symbols[index++]);
   REQUIRE("dda" == symbols[index++]);
   REQUIRE("ddb" == symbols[index++]);
   REQUIRE("ddc" == symbols[index++]);
   REQUIRE("ddd" == symbols[index++]);
   REQUIRE("dde" == symbols[index++]);
   REQUIRE("ddf" == symbols[index++]);
   REQUIRE("ddg" == symbols[index++]);
   REQUIRE("dea" == symbols[index++]);
   REQUIRE("deb" == symbols[index++]);
   REQUIRE("dec" == symbols[index++]);
   REQUIRE("ded" == symbols[index++]);
   REQUIRE("dee" == symbols[index++]);
   REQUIRE("def" == symbols[index++]);
   REQUIRE("deg" == symbols[index++]);
   REQUIRE("dfa" == symbols[index++]);
   REQUIRE("dfb" == symbols[index++]);
   REQUIRE("dfc" == symbols[index++]);
   REQUIRE("dfd" == symbols[index++]);
   REQUIRE("dfe" == symbols[index++]);
   REQUIRE("dff" == symbols[index++]);
   REQUIRE("dfg" == symbols[index++]);
   REQUIRE("dga" == symbols[index++]);
   REQUIRE("dgb" == symbols[index++]);
   REQUIRE("dgc" == symbols[index++]);
   REQUIRE("dgd" == symbols[index++]);
   REQUIRE("dge" == symbols[index++]);
   REQUIRE("dgf" == symbols[index++]);
   REQUIRE("dgg" == symbols[index++]);
   REQUIRE("eaa" == symbols[index++]);
   REQUIRE("eab" == symbols[index++]);
   REQUIRE("eac" == symbols[index++]);
   REQUIRE("ead" == symbols[index++]);
   REQUIRE("eae" == symbols[index++]);
   REQUIRE("eaf" == symbols[index++]);
   REQUIRE("eag" == symbols[index++]);
   REQUIRE("eba" == symbols[index++]);
   REQUIRE("ebb" == symbols[index++]);
   REQUIRE("ebc" == symbols[index++]);
   REQUIRE("ebd" == symbols[index++]);
   REQUIRE("ebe" == symbols[index++]);
   REQUIRE("ebf" == symbols[index++]);
   REQUIRE("ebg" == symbols[index++]);
   REQUIRE("eca" == symbols[index++]);
   REQUIRE("ecb" == symbols[index++]);
   REQUIRE("ecc" == symbols[index++]);
   REQUIRE("ecd" == symbols[index++]);
   REQUIRE("ece" == symbols[index++]);
   REQUIRE("ecf" == symbols[index++]);
   REQUIRE("ecg" == symbols[index++]);
   REQUIRE("eda" == symbols[index++]);
   REQUIRE("edb" == symbols[index++]);
   REQUIRE("edc" == symbols[index++]);
   REQUIRE("edd" == symbols[index++]);
   REQUIRE("ede" == symbols[index++]);
   REQUIRE("edf" == symbols[index++]);
   REQUIRE("edg" == symbols[index++]);
   REQUIRE("eea" == symbols[index++]);
   REQUIRE("eeb" == symbols[index++]);
   REQUIRE("eec" == symbols[index++]);
   REQUIRE("eed" == symbols[index++]);
   REQUIRE("eee" == symbols[index++]);
   REQUIRE("eef" == symbols[index++]);
   REQUIRE("eeg" == symbols[index++]);
   REQUIRE("efa" == symbols[index++]);
   REQUIRE("efb" == symbols[index++]);
   REQUIRE("efc" == symbols[index++]);
   REQUIRE("efd" == symbols[index++]);
   REQUIRE("efe" == symbols[index++]);
   REQUIRE("eff" == symbols[index++]);
   REQUIRE("efg" == symbols[index++]);
   REQUIRE("ega" == symbols[index++]);
   REQUIRE("egb" == symbols[index++]);
   REQUIRE("egc" == symbols[index++]);
   REQUIRE("egd" == symbols[index++]);
   REQUIRE("ege" == symbols[index++]);
   REQUIRE("egf" == symbols[index++]);
   REQUIRE("egg" == symbols[index++]);
   REQUIRE("faa" == symbols[index++]);
   REQUIRE("fab" == symbols[index++]);
   REQUIRE("fac" == symbols[index++]);
   REQUIRE("fad" == symbols[index++]);
   REQUIRE("fae" == symbols[index++]);
   REQUIRE("faf" == symbols[index++]);
   REQUIRE("fag" == symbols[index++]);
   REQUIRE("fba" == symbols[index++]);
   REQUIRE("fbb" == symbols[index++]);
   REQUIRE("fbc" == symbols[index++]);
   REQUIRE("fbd" == symbols[index++]);
   REQUIRE("fbe" == symbols[index++]);
   REQUIRE("fbf" == symbols[index++]);
   REQUIRE("fbg" == symbols[index++]);
   REQUIRE("fca" == symbols[index++]);
   REQUIRE("fcb" == symbols[index++]);
   REQUIRE("fcc" == symbols[index++]);
   REQUIRE("fcd" == symbols[index++]);
   REQUIRE("fce" == symbols[index++]);
   REQUIRE("fcf" == symbols[index++]);
   REQUIRE("fcg" == symbols[index++]);
   REQUIRE("fda" == symbols[index++]);
   REQUIRE("fdb" == symbols[index++]);
   REQUIRE("fdc" == symbols[index++]);
   REQUIRE("fdd" == symbols[index++]);
   REQUIRE("fde" == symbols[index++]);
   REQUIRE("fdf" == symbols[index++]);
   REQUIRE("fdg" == symbols[index++]);
   REQUIRE("fea" == symbols[index++]);
   REQUIRE("feb" == symbols[index++]);
   REQUIRE("fec" == symbols[index++]);
   REQUIRE("fed" == symbols[index++]);
   REQUIRE("fee" == symbols[index++]);
   REQUIRE("fef" == symbols[index++]);
   REQUIRE("feg" == symbols[index++]);
   REQUIRE("ffa" == symbols[index++]);
   REQUIRE("ffb" == symbols[index++]);
   REQUIRE("ffc" == symbols[index++]);
   REQUIRE("ffd" == symbols[index++]);
   REQUIRE("ffe" == symbols[index++]);
   REQUIRE("fff" == symbols[index++]);
   REQUIRE("ffg" == symbols[index++]);
   REQUIRE("fga" == symbols[index++]);
   REQUIRE("fgb" == symbols[index++]);
   REQUIRE("fgc" == symbols[index++]);
   REQUIRE("fgd" == symbols[index++]);
   REQUIRE("fge" == symbols[index++]);
   REQUIRE("fgf" == symbols[index++]);
   REQUIRE("fgg" == symbols[index++]);
   REQUIRE("gaa" == symbols[index++]);
   REQUIRE("gab" == symbols[index++]);
   REQUIRE("gac" == symbols[index++]);
   REQUIRE("gad" == symbols[index++]);
   REQUIRE("gae" == symbols[index++]);
   REQUIRE("gaf" == symbols[index++]);
   REQUIRE("gag" == symbols[index++]);
   REQUIRE("gba" == symbols[index++]);
   REQUIRE("gbb" == symbols[index++]);
   REQUIRE("gbc" == symbols[index++]);
   REQUIRE("gbd" == symbols[index++]);
   REQUIRE("gbe" == symbols[index++]);
   REQUIRE("gbf" == symbols[index++]);
   REQUIRE("gbg" == symbols[index++]);
   REQUIRE("gca" == symbols[index++]);
   REQUIRE("gcb" == symbols[index++]);
   REQUIRE("gcc" == symbols[index++]);
   REQUIRE("gcd" == symbols[index++]);
   REQUIRE("gce" == symbols[index++]);
   REQUIRE("gcf" == symbols[index++]);
   REQUIRE("gcg" == symbols[index++]);
   REQUIRE("gda" == symbols[index++]);
   REQUIRE("gdb" == symbols[index++]);
   REQUIRE("gdc" == symbols[index++]);
   REQUIRE("gdd" == symbols[index++]);
   REQUIRE("gde" == symbols[index++]);
   REQUIRE("gdf" == symbols[index++]);
   REQUIRE("gdg" == symbols[index++]);
   REQUIRE("gea" == symbols[index++]);
   REQUIRE("geb" == symbols[index++]);
   REQUIRE("gec" == symbols[index++]);
   REQUIRE("ged" == symbols[index++]);
   REQUIRE("gee" == symbols[index++]);
   REQUIRE("gef" == symbols[index++]);
   REQUIRE("geg" == symbols[index++]);
   REQUIRE("gfa" == symbols[index++]);
   REQUIRE("gfb" == symbols[index++]);
   REQUIRE("gfc" == symbols[index++]);
   REQUIRE("gfd" == symbols[index++]);
   REQUIRE("gfe" == symbols[index++]);
   REQUIRE("gff" == symbols[index++]);
   REQUIRE("gfg" == symbols[index++]);
   REQUIRE("gga" == symbols[index++]);
   REQUIRE("ggb" == symbols[index++]);
   REQUIRE("ggc" == symbols[index++]);
   REQUIRE("ggd" == symbols[index++]);
   REQUIRE("gge" == symbols[index++]);
   REQUIRE("ggf" == symbols[index++]);
   REQUIRE("ggg" == symbols[index++]);
}
