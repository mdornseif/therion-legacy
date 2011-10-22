#include "thsymbolsets.h"

int thsymsets_symbols [thsymbolset_size][thsymsets_size];

int thsymsets_figure [thsymbolset_size][thsymsets_size+1];

int thsymsets_order[thsymbolset_size];

int thsymsets_count[thsymsets_size];

std::map<unsigned, std::string> thsymsets_comment;




void thsymsets_symbols_init() {
	size_t i, j;
	for(i = 0; i <= thsymbolset_size; i++)
		for(j = 0; j < thsymsets_size; j++) 
			thsymsets_symbols[i][j] = 0;
		
	
	thsymsets_symbols[SYMP_AIRDRAUGHT][1] = 1;
	thsymsets_symbols[SYMP_AIRDRAUGHT][6] = 1;
	thsymsets_symbols[SYMP_AIRDRAUGHT_SUMMER][6] = 1;
	thsymsets_symbols[SYMP_AIRDRAUGHT_WINTER][6] = 1;
	thsymsets_symbols[SYMP_ANASTOMOSIS][6] = 1;
	thsymsets_symbols[SYMP_ANCHOR][4] = 1;
	thsymsets_symbols[SYMP_ARAGONITE][3] = 1;
	thsymsets_symbols[SYMP_ARCHEOMATERIAL][6] = 1;
	thsymsets_symbols[SYMP_BEDROCK][0] = 1;
	thsymsets_symbols[SYMP_BLOCKS][1] = 1;
	thsymsets_symbols[SYMP_BLOCKS][6] = 1;
	thsymsets_symbols[SYMP_BREAKDOWNCHOKE][1] = 1;
	thsymsets_symbols[SYMP_BREAKDOWNCHOKE][3] = 1;
	thsymsets_symbols[SYMP_BRIDGE][4] = 1;
	thsymsets_symbols[SYMP_CAMP][4] = 1;
	thsymsets_symbols[SYMP_CAVEPEARL][4] = 1;
	thsymsets_symbols[SYMP_CLAY][1] = 1;
	thsymsets_symbols[SYMP_CLAY][4] = 1;
	thsymsets_symbols[SYMP_CLAYCHOKE][1] = 1;
	thsymsets_symbols[SYMP_CLAYTREE][1] = 1;
	thsymsets_symbols[SYMP_CONTINUATION][6] = 1;
	thsymsets_symbols[SYMP_CRYSTAL][1] = 1;
	thsymsets_symbols[SYMP_CRYSTAL][6] = 1;
	thsymsets_symbols[SYMP_CURTAIN][6] = 1;
	thsymsets_symbols[SYMP_DEBRIS][1] = 1;
	thsymsets_symbols[SYMP_DEBRIS][6] = 1;
	thsymsets_symbols[SYMP_DIG][6] = 1;
	thsymsets_symbols[SYMP_DISK][6] = 1;
	thsymsets_symbols[SYMP_ENTRANCE][1] = 1;
	thsymsets_symbols[SYMP_ENTRANCE][6] = 1;
	thsymsets_symbols[SYMP_FIXEDLADDER][4] = 1;
	thsymsets_symbols[SYMP_FLOWSTONE][6] = 1;
	thsymsets_symbols[SYMP_FLOWSTONECHOKE][3] = 1;
	thsymsets_symbols[SYMP_FLUTE][6] = 1;
	thsymsets_symbols[SYMP_GRADIENT][1] = 1;
	thsymsets_symbols[SYMP_GRADIENT][2] = 1;
	thsymsets_symbols[SYMP_GRADIENT][3] = 1;
	thsymsets_symbols[SYMP_GRADIENT][6] = 1;
	thsymsets_symbols[SYMP_GUANO][6] = 1;
	thsymsets_symbols[SYMP_GYPSUM][3] = 1;
	thsymsets_symbols[SYMP_GYPSUMFLOWER][3] = 1;
	thsymsets_symbols[SYMP_HELICTITE][6] = 1;
	thsymsets_symbols[SYMP_ICE][1] = 1;
	thsymsets_symbols[SYMP_ICE][6] = 1;
	thsymsets_symbols[SYMP_ICEPILLAR][1] = 1;
	thsymsets_symbols[SYMP_ICESTALACTITE][1] = 1;
	thsymsets_symbols[SYMP_ICESTALAGMITE][1] = 1;
	thsymsets_symbols[SYMP_KARREN][6] = 1;
	thsymsets_symbols[SYMP_LOWEND][3] = 1;
	thsymsets_symbols[SYMP_LOWEND][6] = 1;
	thsymsets_symbols[SYMP_MOONMILK][6] = 1;
	thsymsets_symbols[SYMP_NARROWEND][6] = 1;
	thsymsets_symbols[SYMP_NOEQUIPMENT][4] = 1;
	thsymsets_symbols[SYMP_PALEOMATERIAL][6] = 1;
	thsymsets_symbols[SYMP_PEBBLES][1] = 1;
	thsymsets_symbols[SYMP_PEBBLES][6] = 1;
	thsymsets_symbols[SYMP_PILLAR][1] = 1;
	thsymsets_symbols[SYMP_PILLAR][6] = 1;
	thsymsets_symbols[SYMP_POPCORN][6] = 1;
	thsymsets_symbols[SYMP_RAFT][3] = 1;
	thsymsets_symbols[SYMP_RAFTCONE][3] = 1;
	thsymsets_symbols[SYMP_RIMSTONEDAM][0] = 1;
	thsymsets_symbols[SYMP_RIMSTONEPOOL][0] = 1;
	thsymsets_symbols[SYMP_ROOT][0] = 1;
	thsymsets_symbols[SYMP_ROPE][4] = 1;
	thsymsets_symbols[SYMP_ROPELADDER][4] = 1;
	thsymsets_symbols[SYMP_SAND][1] = 1;
	thsymsets_symbols[SYMP_SAND][6] = 1;
	thsymsets_symbols[SYMP_SCALLOP][6] = 1;
	thsymsets_symbols[SYMP_SINK][1] = 1;
	thsymsets_symbols[SYMP_SINK][4] = 1;
	thsymsets_symbols[SYMP_SNOW][4] = 1;
	thsymsets_symbols[SYMP_SODASTRAW][6] = 1;
	thsymsets_symbols[SYMP_SPRING][1] = 1;
	thsymsets_symbols[SYMP_SPRING][4] = 1;
	thsymsets_symbols[SYMP_STALACTITE][1] = 1;
	thsymsets_symbols[SYMP_STALACTITE][6] = 1;
	thsymsets_symbols[SYMP_STALAGMITE][1] = 1;
	thsymsets_symbols[SYMP_STALAGMITE][6] = 1;
	thsymsets_symbols[SYMP_STATION][4] = 1;
	thsymsets_symbols[SYMP_STATION_FIXED][0] = 1;
	thsymsets_symbols[SYMP_STATION_FIXED][1] = 1;
	thsymsets_symbols[SYMP_STATION_NATURAL][0] = 1;
	thsymsets_symbols[SYMP_STATION_PAINTED][1] = 1;
	thsymsets_symbols[SYMP_STATION_PAINTED][4] = 1;
	thsymsets_symbols[SYMP_STATION_TEMPORARY][0] = 1;
	thsymsets_symbols[SYMP_STATION_TEMPORARY][1] = 1;
	thsymsets_symbols[SYMP_STATION_TEMPORARY][4] = 1;
	thsymsets_symbols[SYMP_STEPS][4] = 1;
	thsymsets_symbols[SYMP_TRAVERSE][4] = 1;
	thsymsets_symbols[SYMP_VEGETABLEDEBRIS][0] = 1;
	thsymsets_symbols[SYMP_WALLCALCITE][6] = 1;
	thsymsets_symbols[SYMP_WATER][1] = 1;
	thsymsets_symbols[SYMP_WATER][6] = 1;
	thsymsets_symbols[SYMP_WATERFLOW_INTERMITTENT][6] = 1;
	thsymsets_symbols[SYMP_WATERFLOW_PALEO][6] = 1;
	thsymsets_symbols[SYMP_WATERFLOW_PERMANENT][6] = 1;
	thsymsets_symbols[SYML_ARROW][4] = 1;
	thsymsets_symbols[SYML_BORDER_PRESUMED][4] = 1;
	thsymsets_symbols[SYML_BORDER_TEMPORARY][4] = 1;
	thsymsets_symbols[SYML_BORDER_VISIBLE][4] = 1;
	thsymsets_symbols[SYML_CEILINGMEANDER][4] = 1;
	thsymsets_symbols[SYML_CEILINGSTEP][4] = 1;
	thsymsets_symbols[SYML_CHIMNEY][6] = 1;
	thsymsets_symbols[SYML_CONTOUR][1] = 1;
	thsymsets_symbols[SYML_CONTOUR][4] = 1;
	thsymsets_symbols[SYML_CONTOUR][6] = 1;
	thsymsets_symbols[SYML_FLOORMEANDER][4] = 1;
	thsymsets_symbols[SYML_FLOORSTEP][1] = 1;
	thsymsets_symbols[SYML_FLOORSTEP][6] = 1;
	thsymsets_symbols[SYML_FLOWSTONE][1] = 1;
	thsymsets_symbols[SYML_FLOWSTONE][6] = 1;
	thsymsets_symbols[SYML_GRADIENT][2] = 1;
	thsymsets_symbols[SYML_GRADIENT][6] = 1;
	thsymsets_symbols[SYML_MAPCONNECTION][4] = 1;
	thsymsets_symbols[SYML_MOONMILK][6] = 1;
	thsymsets_symbols[SYML_OVERHANG][1] = 1;
	thsymsets_symbols[SYML_OVERHANG][4] = 1;
	thsymsets_symbols[SYML_PIT][1] = 1;
	thsymsets_symbols[SYML_PIT][6] = 1;
	thsymsets_symbols[SYML_ROCKBORDER][6] = 1;
	thsymsets_symbols[SYML_ROCKEDGE][6] = 1;
	thsymsets_symbols[SYML_ROPE][4] = 1;
	thsymsets_symbols[SYML_SECTION][4] = 1;
	thsymsets_symbols[SYML_SLOPE][2] = 1;
	thsymsets_symbols[SYML_SLOPE][4] = 1;
	thsymsets_symbols[SYML_SURVEY_CAVE][1] = 1;
	thsymsets_symbols[SYML_SURVEY_CAVE][4] = 1;
	thsymsets_symbols[SYML_SURVEY_CAVE][6] = 1;
	thsymsets_symbols[SYML_SURVEY_SURFACE][4] = 1;
	thsymsets_symbols[SYML_WALL_BEDROCK][6] = 1;
	thsymsets_symbols[SYML_WALL_BLOCKS][1] = 1;
	thsymsets_symbols[SYML_WALL_BLOCKS][4] = 1;
	thsymsets_symbols[SYML_WALL_CLAY][1] = 1;
	thsymsets_symbols[SYML_WALL_CLAY][4] = 1;
	thsymsets_symbols[SYML_WALL_DEBRIS][1] = 1;
	thsymsets_symbols[SYML_WALL_DEBRIS][4] = 1;
	thsymsets_symbols[SYML_WALL_FLOWSTONE][1] = 1;
	thsymsets_symbols[SYML_WALL_ICE][1] = 1;
	thsymsets_symbols[SYML_WALL_ICE][4] = 1;
	thsymsets_symbols[SYML_WALL_MOONMILK][1] = 1;
	thsymsets_symbols[SYML_WALL_OVERLYING][1] = 1;
	thsymsets_symbols[SYML_WALL_PEBBLES][1] = 1;
	thsymsets_symbols[SYML_WALL_PEBBLES][4] = 1;
	thsymsets_symbols[SYML_WALL_PIT][1] = 1;
	thsymsets_symbols[SYML_WALL_PRESUMED][6] = 1;
	thsymsets_symbols[SYML_WALL_SAND][1] = 1;
	thsymsets_symbols[SYML_WALL_SAND][4] = 1;
	thsymsets_symbols[SYML_WALL_UNDERLYING][1] = 1;
	thsymsets_symbols[SYML_WALL_UNDERLYING][6] = 1;
	thsymsets_symbols[SYML_WALL_UNSURVEYED][4] = 1;
	thsymsets_symbols[SYML_WATERFLOW_CONJECTURAL][4] = 1;
	thsymsets_symbols[SYML_WATERFLOW_INTERMITTENT][4] = 1;
	thsymsets_symbols[SYML_WATERFLOW_PERMANENT][6] = 1;
	thsymsets_symbols[SYMA_BEDROCK][4] = 1;
	thsymsets_symbols[SYMA_BLOCKS][1] = 1;
	thsymsets_symbols[SYMA_BLOCKS][4] = 1;
	thsymsets_symbols[SYMA_CLAY][1] = 1;
	thsymsets_symbols[SYMA_CLAY][4] = 1;
	thsymsets_symbols[SYMA_DEBRIS][1] = 1;
	thsymsets_symbols[SYMA_DEBRIS][4] = 1;
	thsymsets_symbols[SYMA_DEBRIS][6] = 1;
	thsymsets_symbols[SYMA_DIMENSIONS][4] = 1;
	thsymsets_symbols[SYMA_FLOWSTONE][0] = 1;
	thsymsets_symbols[SYMA_ICE][1] = 1;
	thsymsets_symbols[SYMA_ICE][4] = 1;
	thsymsets_symbols[SYMA_MOONMILK][4] = 1;
	thsymsets_symbols[SYMA_PEBBLES][1] = 1;
	thsymsets_symbols[SYMA_PEBBLES][4] = 1;
	thsymsets_symbols[SYMA_SAND][1] = 1;
	thsymsets_symbols[SYMA_SAND][6] = 1;
	thsymsets_symbols[SYMA_SNOW][1] = 1;
	thsymsets_symbols[SYMA_SNOW][4] = 1;
	thsymsets_symbols[SYMA_SUMP][1] = 1;
	thsymsets_symbols[SYMA_SUMP][4] = 1;
	thsymsets_symbols[SYMA_SUMP][6] = 1;
	thsymsets_symbols[SYMA_WATER][1] = 1;
	thsymsets_symbols[SYMA_WATER][4] = 1;
	thsymsets_symbols[SYMA_WATER][6] = 1;
}