class CfgPatches
{
	class chiemseeMapParts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Navigation"};
		author = "Coffee_sw";
		name = "chiemseeMapParts";
	};
};
class CfgMods
{
	class chiemseeMapParts
	{
		type = "mod";
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FourPartsChiemseeMap/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FourPartsChiemseeMap/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FourPartsChiemseeMap/scripts/5_Mission"};
			};
			class imageSets
			{
				files[] = {};
			};
		};
	};
};
class MapDefaults;
class CfgVehicles
{
    class ItemMap
    {
       
    };
    class chiemseeMapPartBase:ItemMap
    {
        scope=2;
		displayName="chiemseeMapPartBase";
		descriptionShort="chiemseeMapPartBase";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		absorbency=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\navigation\data\Map_chernarus.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin=0.12;
			scaleMax=0.347;
		};
        
        class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
    };
	class chiemseeMapPart1: chiemseeMapPartBase
	{
        scope=2;
		displayName="chiemseeMapPart1";
		descriptionShort="chiemseeMapPart1";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		absorbency=1;
		model="FourPartsChiemseeMap\data\model\part1\map_chiemsee_part1.p3d";
        class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
    class chiemseeMapPart2: chiemseeMapPartBase
	{
		scope=2;
		displayName="chiemseeMapPart2";
		descriptionShort="chiemseeMapPart2";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		absorbency=1;
		model="FourPartsChiemseeMap\data\model\part2\map_chiemsee_part2.p3d";
        class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
    class chiemseeMapPart3: chiemseeMapPartBase
	{
		scope=2;
		displayName="chiemseeMapPart3";
		descriptionShort="chiemseeMapPart3";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		absorbency=1;
		model="FourPartsChiemseeMap\data\model\part3\map_chiemsee_part3.p3d";
        class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
    class chiemseeMapPart4: chiemseeMapPartBase
	{
		scope=2;
		displayName="chiemseeMapPart4";
		descriptionShort="chiemseeMapPart4";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=40;
		selectionPaper="paper";
		simulation="ItemMap";
		absorbency=1;
		model="FourPartsChiemseeMap\data\model\part4\map_chiemsee_part4.p3d";
        class AnimationSources
		{
			class map_closed
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class map_opened
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
	};
};
