class CfgPatches
{
	class azw_DamageAreaTest
	{
		units[]				=	{"azw_DamageArea"};
		weapons[]			=	{};
		requiredVersion		=	0.1;
		requiredAddons[]	=	{"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class azw_DamageAreaTest
	{
		name				=	"azw_DamageAreaTest";
		credits				=	"AndreZ";
		author				=	"AndreZ";
		authorID			=	"0";
		type				=	"mod";
		dependencies[]		=	{"World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[]		=	{"azw_DamageAreaTest/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value		=	"";
				files[]		=	{"azw_DamageAreaTest/Scripts/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class azw_DamageArea : Inventory_Base
	{
		forceFarBubble="true";
		itemBehaviour=2;
		overrideDrawArea="8.0";
		scope=2;
		physLayer="item_large";
		useEntityHierarchy="true";
		model="DZ\gear\radio\walkietalkie.p3d";
	};
};


