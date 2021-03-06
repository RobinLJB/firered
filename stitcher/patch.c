// Definitions to ease porting stuff from the db over
#define mapdata_header data
#define saveblock1_mapdata sav1i
#define saveblock2_trainerdata sav2i
#define saveblock3_boxdata sav3i

#define NO_RAM

#if 1
#include "../gpu.c"
#include "../task.c"
#else
#include "../bag.c"
#include "../bag_interface.c"
#include "../battle.c"
#include "../battle_ai.c"
#include "../battle_ai_trainer.c"
#include "../battle_cmds.c"
#include "../battle_config.c"
#include "../battle_interface.c"
#include "../battle_rpc_recv.c"
#include "../battle_rpc_send.c"
#include "../choice.c"
#include "../continuegame.c"
#include "../ctxmenu.c"
#include "../dialog.c"
#include "../environment.c"
#include "../fade.c"
#include "../fbox.c"
#include "../fishing.c"
#include "../flash.c"
#include "../gpu_alloc_pal.c"
#include "../gpu_alloc_tile.c"
#include "../gpu.c"
#include "../helpsystem.c"
#include "../hm.c"
#include "../intro.c"
#include "../main.c"
#include "../mevent_server.c"
#include "../move_anim.c"
#include "../move_cmds.c"
//#include "../move_etc.c"
#include "../move_interp.c"
#include "../npc.c"
#include "../npc_cmds.c"
#include "../npc_interp.c"
#include "../object.c"
#include "../object_anim.c"
#include "../overworld.c"
#include "../overworld_door.c"
#include "../overworld_effect_interp.c"
#include "../overworld_effects_impl.c"
#include "../overworld_loading.c"
#include "../overworld_navigation.c"
#include "../rbox.c"
#include "../save.c"
#include "../startmenu.c"
#include "../task.c"
#include "../text.c"
#include "../u0802a_moves.c"
#include "../u0807d_overworld.c"
#include "../u08086.c"
#include "../u080f6_gpu.c"
#include "../u08150_rbox.c"
#include "../uncategorized.c"
#include "../vars.c"
#include "../whiteout.c"
#include "../wild_pokemon_encounter.c"
#endif