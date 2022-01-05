AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0

AlteringCave_OnTransition:
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end
	
AlteringCave_MysteryMan_Text_Preamble:
	.string "???: Hello, child. I can take you to a\n"
	.string "far-off land. Be warned: if you do not\l"
	.string "bring POKé BALLS, you will be sorry.$"

AlteringCave_MysteryMan_Text_NowGo:
	.string "Now go ahead, and catch it!$"
    
AlteringCave_EventScript_MysteryMan::
	lock
	faceplayer
	msgbox AlteringCave_MysteryMan_Text_Preamble, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	msgbox AlteringCave_MysteryMan_Text_NowGo, MSGBOX_AUTOCLOSE
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 0, 0, 0
	end    	
