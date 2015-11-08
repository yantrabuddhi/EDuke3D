//-------------------------------------------------------------------------
/*
Copyright (C) 2013 EDuke32 developers and contributors

This file is part of EDuke32.

EDuke32 is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
//-------------------------------------------------------------------------

#define DYNSOUNDREMAP_ENABLE


#define KICK_HIT__STATIC 0
#define PISTOL_RICOCHET__STATIC 1
#define PISTOL_BODYHIT__STATIC 2
#define PISTOL_FIRE__STATIC 3
#define EJECT_CLIP__STATIC 4
#define INSERT_CLIP__STATIC 5
#define CHAINGUN_FIRE__STATIC 6
#define RPG_SHOOT__STATIC 7
#define POOLBALLHIT__STATIC 8
#define RPG_EXPLODE__STATIC 9
#define CAT_FIRE__STATIC 10
#define SHRINKER_FIRE__STATIC 11
#define ACTOR_SHRINKING__STATIC 12
#define PIPEBOMB_BOUNCE__STATIC 13
#define PIPEBOMB_EXPLODE__STATIC 14
#define LASERTRIP_ONWALL__STATIC 15
#define LASERTRIP_ARMING__STATIC 16
#define LASERTRIP_EXPLODE__STATIC 17
#define VENT_BUST__STATIC 18
#define GLASS_BREAKING__STATIC 19
#define GLASS_HEAVYBREAK__STATIC 20
#define SHORT_CIRCUIT__STATIC 21
#define ITEM_SPLASH__STATIC 22
#define DUKE_BREATHING__STATIC 23
#define DUKE_EXHALING__STATIC 24
#define DUKE_GASP__STATIC 25
#define SLIM_RECOG__STATIC 26
// #define ENDSEQVOL3SND1__STATIC 27
#define DUKE_URINATE__STATIC 28
#define ENDSEQVOL3SND2__STATIC 29
#define ENDSEQVOL3SND3__STATIC 30
#define DUKE_PASSWIND__STATIC 32
#define DUKE_CRACK__STATIC 33
#define SLIM_ATTACK__STATIC 34
#define SOMETHINGHITFORCE__STATIC 35
#define DUKE_DRINKING__STATIC 36
#define DUKE_KILLED1__STATIC 37
#define DUKE_GRUNT__STATIC 38
#define DUKE_HARTBEAT__STATIC 39
#define DUKE_ONWATER__STATIC 40
#define DUKE_DEAD__STATIC 41
#define DUKE_LAND__STATIC 42
#define DUKE_WALKINDUCTS__STATIC 43
#define DUKE_GLAD__STATIC 44
#define DUKE_YES__STATIC 45
#define DUKE_HEHE__STATIC 46
#define DUKE_SHUCKS__STATIC 47
#define DUKE_UNDERWATER__STATIC 48
#define DUKE_JETPACK_ON__STATIC 49
#define DUKE_JETPACK_IDLE__STATIC 50
#define DUKE_JETPACK_OFF__STATIC 51
#define LIZTROOP_GROWL__STATIC 52
#define LIZTROOP_TALK1__STATIC 53
#define LIZTROOP_TALK2__STATIC 54
#define LIZTROOP_TALK3__STATIC 55
#define DUKETALKTOBOSS__STATIC 56
#define LIZCAPT_GROWL__STATIC 57
#define LIZCAPT_TALK1__STATIC 58
#define LIZCAPT_TALK2__STATIC 59
#define LIZCAPT_TALK3__STATIC 60
#define LIZARD_BEG__STATIC 61
#define LIZARD_PAIN__STATIC 62
#define LIZARD_DEATH__STATIC 63
#define LIZARD_SPIT__STATIC 64
#define DRONE1_HISSRATTLE__STATIC 65
#define DRONE1_HISSSCREECH__STATIC 66
#define DUKE_TIP2__STATIC 67
#define FLESH_BURNING__STATIC 68
#define SQUISHED__STATIC 69
#define TELEPORTER__STATIC 70
#define ELEVATOR_ON__STATIC 71
#define DUKE_KILLED3__STATIC 72
#define ELEVATOR_OFF__STATIC 73
#define DOOR_OPERATE1__STATIC 74
#define SUBWAY__STATIC 75
#define SWITCH_ON__STATIC 76
#define FAN__STATIC 77
#define DUKE_GETWEAPON3__STATIC 78
#define FLUSH_TOILET__STATIC 79
#define HOVER_CRAFT__STATIC 80
#define EARTHQUAKE__STATIC 81
#define INTRUDER_ALERT__STATIC 82
#define END_OF_LEVEL_WARN__STATIC 83
#define ENGINE_OPERATING__STATIC 84
#define REACTOR_ON__STATIC 85
#define COMPUTER_AMBIENCE__STATIC 86
#define GEARS_GRINDING__STATIC 87
#define BUBBLE_AMBIENCE__STATIC 88
#define MACHINE_AMBIENCE__STATIC 89
#define SEWER_AMBIENCE__STATIC 90
#define WIND_AMBIENCE__STATIC 91
#define SOMETHING_DRIPPING__STATIC 92
#define STEAM_HISSING__STATIC 93
#define THEATER_BREATH__STATIC 94
#define BAR_MUSIC__STATIC 95
#define BOS1_ROAM__STATIC 96
#define BOS1_RECOG__STATIC 97
#define BOS1_ATTACK1__STATIC 98
#define BOS1_PAIN__STATIC 99
#define BOS1_DYING__STATIC 100
#define BOS2_ROAM__STATIC 101
#define BOS2_RECOG__STATIC 102
#define BOS2_ATTACK__STATIC 103
#define BOS2_PAIN__STATIC 104
#define BOS2_DYING__STATIC 105
#define GETATOMICHEALTH__STATIC 106
#define DUKE_GETWEAPON2__STATIC 107
#define BOS3_DYING__STATIC 108
#define SHOTGUN_FIRE__STATIC 109
#define PRED_ROAM__STATIC 110
#define PRED_RECOG__STATIC 111
#define PRED_ATTACK__STATIC 112
#define PRED_PAIN__STATIC 113
#define PRED_DYING__STATIC 114
#define CAPT_ROAM__STATIC 115
#define CAPT_ATTACK__STATIC 116
#define CAPT_RECOG__STATIC 117
#define CAPT_PAIN__STATIC 118
#define CAPT_DYING__STATIC 119
#define PIG_ROAM__STATIC 120
#define PIG_RECOG__STATIC 121
#define PIG_ATTACK__STATIC 122
#define PIG_PAIN__STATIC 123
#define PIG_DYING__STATIC 124
#define RECO_ROAM__STATIC 125
#define RECO_RECOG__STATIC 126
#define RECO_ATTACK__STATIC 127
#define RECO_PAIN__STATIC 128
#define RECO_DYING__STATIC 129
#define DRON_ROAM__STATIC 130
#define DRON_RECOG__STATIC 131
#define DRON_ATTACK1__STATIC 132
#define DRON_PAIN__STATIC 133
#define DRON_DYING__STATIC 134
#define COMM_ROAM__STATIC 135
#define COMM_RECOG__STATIC 136
#define COMM_ATTACK__STATIC 137
#define COMM_PAIN__STATIC 138
#define COMM_DYING__STATIC 139
#define OCTA_ROAM__STATIC 140
#define OCTA_RECOG__STATIC 141
#define OCTA_ATTACK1__STATIC 142
#define OCTA_PAIN__STATIC 143
#define OCTA_DYING__STATIC 144
#define TURR_ROAM__STATIC 145
#define TURR_RECOG__STATIC 146
#define TURR_ATTACK__STATIC 147
#define DUMPSTER_MOVE__STATIC 148
#define SLIM_DYING__STATIC 149
#define BOS3_ROAM__STATIC 150
#define BOS3_RECOG__STATIC 151
#define BOS3_ATTACK1__STATIC 152
#define BOS3_PAIN__STATIC 153
#define BOS1_ATTACK2__STATIC 154
#define COMM_SPIN__STATIC 155
#define BOS1_WALK__STATIC 156
#define DRON_ATTACK2__STATIC 157
#define THUD__STATIC 158
#define OCTA_ATTACK2__STATIC 159
#define WIERDSHOT_FLY__STATIC 160
#define TURR_PAIN__STATIC 161
#define TURR_DYING__STATIC 162
#define SLIM_ROAM__STATIC 163
#define LADY_SCREAM__STATIC 164
#define DOOR_OPERATE2__STATIC 165
#define DOOR_OPERATE3__STATIC 166
#define DOOR_OPERATE4__STATIC 167
#define BORNTOBEWILDSND__STATIC 168
#define SHOTGUN_COCK__STATIC 169
#define GENERIC_AMBIENCE1__STATIC 170
#define GENERIC_AMBIENCE2__STATIC 171
#define GENERIC_AMBIENCE3__STATIC 172
#define GENERIC_AMBIENCE4__STATIC 173
#define GENERIC_AMBIENCE5__STATIC 174
#define GENERIC_AMBIENCE6__STATIC 175
#define BOS3_ATTACK2__STATIC 176
#define GENERIC_AMBIENCE17__STATIC 177
#define GENERIC_AMBIENCE18__STATIC 178
#define GENERIC_AMBIENCE19__STATIC 179
#define GENERIC_AMBIENCE20__STATIC 180
#define GENERIC_AMBIENCE21__STATIC 181
#define GENERIC_AMBIENCE22__STATIC 182
#define SECRETLEVELSND__STATIC 183
#define GENERIC_AMBIENCE8__STATIC 184
#define GENERIC_AMBIENCE9__STATIC 185
#define GENERIC_AMBIENCE10__STATIC 186
#define GENERIC_AMBIENCE11__STATIC 187
#define GENERIC_AMBIENCE12__STATIC 188
#define GENERIC_AMBIENCE13__STATIC 189
#define GENERIC_AMBIENCE14__STATIC 190
#define GENERIC_AMBIENCE15__STATIC 192
#define GENERIC_AMBIENCE16__STATIC 193
#define FIRE_CRACKLE__STATIC 194
#define BONUS_SPEECH1__STATIC 195
#define BONUS_SPEECH2__STATIC 196
#define BONUS_SPEECH3__STATIC 197
#define PIG_CAPTURE_DUKE__STATIC 198
#define BONUS_SPEECH4__STATIC 199
#define DUKE_LAND_HURT__STATIC 200
#define DUKE_HIT_STRIPPER1__STATIC 201
#define DUKE_TIP1__STATIC 202
#define DUKE_KILLED2__STATIC 203
#define PRED_ROAM2__STATIC 204
#define PIG_ROAM2__STATIC 205
#define DUKE_GETWEAPON1__STATIC 206
#define DUKE_SEARCH2__STATIC 207
#define DUKE_CRACK2__STATIC 208
#define DUKE_SEARCH__STATIC 209
#define DUKE_GET__STATIC 210
#define DUKE_LONGTERM_PAIN__STATIC 211
#define MONITOR_ACTIVE__STATIC 212
#define NITEVISION_ONOFF__STATIC 213
#define DUKE_HIT_STRIPPER2__STATIC 214
#define DUKE_CRACK_FIRST__STATIC 215
#define DUKE_USEMEDKIT__STATIC 216
#define DUKE_TAKEPILLS__STATIC 217
#define DUKE_PISSRELIEF__STATIC 218
#define SELECT_WEAPON__STATIC 219
#define WATER_GURGLE__STATIC 220
#define DUKE_GETWEAPON4__STATIC 221
#define JIBBED_ACTOR1__STATIC 222
#define JIBBED_ACTOR2__STATIC 223
#define JIBBED_ACTOR3__STATIC 224
#define JIBBED_ACTOR4__STATIC 225
#define JIBBED_ACTOR5__STATIC 226
#define JIBBED_ACTOR6__STATIC 227
#define JIBBED_ACTOR7__STATIC 228
#define DUKE_GOTHEALTHATLOW__STATIC 229
#define BOSSTALKTODUKE__STATIC 230
#define WAR_AMBIENCE1__STATIC 231
#define WAR_AMBIENCE2__STATIC 232
#define WAR_AMBIENCE3__STATIC 233
#define WAR_AMBIENCE4__STATIC 234
#define WAR_AMBIENCE5__STATIC 235
#define WAR_AMBIENCE6__STATIC 236
#define WAR_AMBIENCE7__STATIC 237
#define WAR_AMBIENCE8__STATIC 238
#define WAR_AMBIENCE9__STATIC 239
#define WAR_AMBIENCE10__STATIC 240
#define ALIEN_TALK1__STATIC 241
#define ALIEN_TALK2__STATIC 242
#define EXITMENUSOUND__STATIC 243
#define FLY_BY__STATIC 244
#define DUKE_SCREAM__STATIC 245
#define SHRINKER_HIT__STATIC 246
#define RATTY__STATIC 247
#define INTO_MENU__STATIC 248
#define BONUSMUSIC__STATIC 249
#define DUKE_BOOBY__STATIC 250
#define DUKE_TALKTOBOSSFALL__STATIC 251
#define DUKE_LOOKINTOMIRROR__STATIC 252
#define PIG_ROAM3__STATIC 253
#define KILLME__STATIC 254
#define DRON_JETSND__STATIC 255
#define SPACE_DOOR1__STATIC 256
#define SPACE_DOOR2__STATIC 257
#define SPACE_DOOR3__STATIC 258
#define SPACE_DOOR4__STATIC 259
#define SPACE_DOOR5__STATIC 260
#define ALIEN_ELEVATOR1__STATIC 261
#define VAULT_DOOR__STATIC 262
#define JIBBED_ACTOR13__STATIC 263
#define DUKE_GETWEAPON6__STATIC 264
#define JIBBED_ACTOR8__STATIC 265
#define JIBBED_ACTOR9__STATIC 266
#define JIBBED_ACTOR10__STATIC 267
#define JIBBED_ACTOR11__STATIC 268
#define JIBBED_ACTOR12__STATIC 269
#define DUKE_KILLED4__STATIC 270
#define DUKE_KILLED5__STATIC 271
#define ALIEN_SWITCH1__STATIC 272
#define DUKE_STEPONFECES__STATIC 273
#define DUKE_LONGTERM_PAIN2__STATIC 274
#define DUKE_LONGTERM_PAIN3__STATIC 275
#define DUKE_LONGTERM_PAIN4__STATIC 276
#define COMPANB2__STATIC 277
#define KTIT__STATIC 278
#define HELICOP_IDLE__STATIC 279
#define STEPNIT__STATIC 280
#define SPACE_AMBIENCE1__STATIC 281
#define SPACE_AMBIENCE2__STATIC 282
#define SLIM_HATCH__STATIC 283
#define RIPHEADNECK__STATIC 284
#define FOUNDJONES__STATIC 285
#define ALIEN_DOOR1__STATIC 286
#define ALIEN_DOOR2__STATIC 287
#define ENDSEQVOL3SND4__STATIC 288
#define ENDSEQVOL3SND5__STATIC 289
#define ENDSEQVOL3SND6__STATIC 290
#define ENDSEQVOL3SND7__STATIC 291
#define ENDSEQVOL3SND8__STATIC 292
#define ENDSEQVOL3SND9__STATIC 293
#define WHIPYOURASS__STATIC 294
#define ENDSEQVOL2SND1__STATIC 295
#define ENDSEQVOL2SND2__STATIC 296
#define ENDSEQVOL2SND3__STATIC 297
#define ENDSEQVOL2SND4__STATIC 298
#define ENDSEQVOL2SND5__STATIC 299
#define ENDSEQVOL2SND6__STATIC 300
#define ENDSEQVOL2SND7__STATIC 301
#define GENERIC_AMBIENCE23__STATIC 302
#define SOMETHINGFROZE__STATIC 303
#define DUKE_LONGTERM_PAIN5__STATIC 304
#define DUKE_LONGTERM_PAIN6__STATIC 305
#define DUKE_LONGTERM_PAIN7__STATIC 306
#define DUKE_LONGTERM_PAIN8__STATIC 307
#define WIND_REPEAT__STATIC 308
#define MYENEMY_ROAM__STATIC 309
#define MYENEMY_HURT__STATIC 310
#define MYENEMY_DEAD__STATIC 311
#define MYENEMY_SHOOT__STATIC 312
#define STORE_MUSIC__STATIC 313
#define STORE_MUSIC_BROKE__STATIC 314
#define ACTOR_GROWING__STATIC 315
#define NEWBEAST_ROAM__STATIC 316
#define NEWBEAST_RECOG__STATIC 317
#define NEWBEAST_ATTACK__STATIC 318
#define NEWBEAST_PAIN__STATIC 319
#define NEWBEAST_DYING__STATIC 320
#define NEWBEAST_SPIT__STATIC 321
#define VOL4_1__STATIC 322
#define SUPERMARKET__STATIC 323
#define MOUSEANNOY__STATIC 324
#define BOOKEM__STATIC 325
#define SUPERMARKETCRY__STATIC 326
#define DESTRUCT__STATIC 327
#define EATFOOD__STATIC 328
#define MAKEMYDAY__STATIC 329
#define WITNESSSTAND__STATIC 330
#define VACATIONSPEECH__STATIC 331
#define YIPPEE1__STATIC 332
#define YOHOO1__STATIC 333
#define YOHOO2__STATIC 334
#define DOLPHINSND__STATIC 335
#define TOUGHGALSND1__STATIC 336
#define TOUGHGALSND2__STATIC 337
#define TOUGHGALSND3__STATIC 338
#define TOUGHGALSND4__STATIC 339
#define TANK_ROAM__STATIC 340
#define BOS4_ROAM__STATIC 341
#define BOS4_RECOG__STATIC 342
#define BOS4_ATTACK__STATIC 343
#define BOS4_PAIN__STATIC 344
#define BOS4_DYING__STATIC 345
#define NEWBEAST_ATTACKMISS__STATIC 346
#define VOL4_2__STATIC 347
#define COOKINGDEEPFRIER__STATIC 348
#define WHINING_DOG__STATIC 349
#define DEAD_DOG__STATIC 350
#define LIGHTNING_SLAP__STATIC 351
#define THUNDER__STATIC 352
#define HAPPYMOUSESND1__STATIC 353
#define HAPPYMOUSESND2__STATIC 354
#define HAPPYMOUSESND3__STATIC 355
#define HAPPYMOUSESND4__STATIC 356
#define ALARM__STATIC 357
#define RAIN__STATIC 358
#define DTAG_GREENRUN__STATIC 359
#define DTAG_BROWNRUN__STATIC 360
#define DTAG_GREENSCORE__STATIC 361
#define DTAG_BROWNSCORE__STATIC 362
#define INTRO4_1__STATIC 363
#define INTRO4_2__STATIC 364
#define INTRO4_3__STATIC 365
#define INTRO4_4__STATIC 366
#define INTRO4_5__STATIC 367
#define INTRO4_6__STATIC 368
#define SCREECH__STATIC 369
#define BOSS4_DEADSPEECH__STATIC 370
#define BOSS4_FIRSTSEE__STATIC 371
#define PARTY_SPEECH__STATIC 372
#define POSTAL_SPEECH__STATIC 373
#define TGSPEECH__STATIC 374
#define DOGROOMSPEECH__STATIC 375
#define SMACKED__STATIC 376
#define MDEVSPEECH__STATIC 377
#define AREA51SPEECH__STATIC 378
#define JEEPSOUND__STATIC 379
#define BIGDOORSLAM__STATIC 380
#define BOS4_LAY__STATIC 381
#define WAVESOUND__STATIC 382
#define ILLBEBACK__STATIC 383
#define VOL4ENDSND1__STATIC 384
#define VOL4ENDSND2__STATIC 385
#define EXPANDERHIT__STATIC 386
#define SNAKESPEECH__STATIC 387
#define EXPANDERSHOOT__STATIC 388
#define GETBACKTOWORK__STATIC 389
#define JIBBED_ACTOR14__STATIC 390
#define JIBBED_ACTOR15__STATIC 391
#define INTRO4_B__STATIC 392
#define BIGBANG__STATIC 393
#define HORNSND__STATIC 394
#define BELLSND__STATIC 395
#define GOAWAY__STATIC 396
#define JOKE__STATIC 397

extern int16_t DynamicSoundMap[MAXSOUNDS];

void G_InitDynamicSounds(void);

#ifdef DYNSOUNDREMAP_ENABLE

void G_ProcessDynamicSoundMapping(const char *szLabel, int32_t lValue);

#if !defined LUNATIC
void initsoundhashnames(void);
void freesoundhashnames(void);
#endif

extern int32_t KICK_HIT;
extern int32_t PISTOL_RICOCHET;
extern int32_t PISTOL_BODYHIT;
extern int32_t PISTOL_FIRE;
extern int32_t EJECT_CLIP;
extern int32_t INSERT_CLIP;
extern int32_t CHAINGUN_FIRE;
extern int32_t RPG_SHOOT;
extern int32_t POOLBALLHIT;
extern int32_t RPG_EXPLODE;
extern int32_t CAT_FIRE;
extern int32_t SHRINKER_FIRE;
extern int32_t PIPEBOMB_BOUNCE;
extern int32_t PIPEBOMB_EXPLODE;
extern int32_t LASERTRIP_ONWALL;
extern int32_t LASERTRIP_ARMING;
extern int32_t LASERTRIP_EXPLODE;
extern int32_t VENT_BUST;
extern int32_t GLASS_BREAKING;
extern int32_t GLASS_HEAVYBREAK;
extern int32_t SHORT_CIRCUIT;
extern int32_t ITEM_SPLASH;
extern int32_t DUKE_GASP;
extern int32_t SLIM_RECOG;
extern int32_t DUKE_URINATE;
extern int32_t ENDSEQVOL3SND2;
extern int32_t ENDSEQVOL3SND3;
extern int32_t DUKE_CRACK;
extern int32_t SLIM_ATTACK;
extern int32_t SOMETHINGHITFORCE;
extern int32_t DUKE_DRINKING;
extern int32_t DUKE_GRUNT;
extern int32_t DUKE_HARTBEAT;
extern int32_t DUKE_ONWATER;
extern int32_t DUKE_LAND;
extern int32_t DUKE_WALKINDUCTS;
extern int32_t DUKE_UNDERWATER;
extern int32_t DUKE_JETPACK_ON;
extern int32_t DUKE_JETPACK_IDLE;
extern int32_t DUKE_JETPACK_OFF;
extern int32_t DUKETALKTOBOSS;
extern int32_t SQUISHED;
extern int32_t TELEPORTER;
extern int32_t ELEVATOR_ON;
extern int32_t ELEVATOR_OFF;
extern int32_t SUBWAY;
extern int32_t SWITCH_ON;
extern int32_t FLUSH_TOILET;
extern int32_t EARTHQUAKE;
extern int32_t END_OF_LEVEL_WARN;
extern int32_t WIND_AMBIENCE;
extern int32_t SOMETHING_DRIPPING;
extern int32_t BOS1_RECOG;
extern int32_t BOS2_RECOG;
extern int32_t DUKE_GETWEAPON2;
extern int32_t SHOTGUN_FIRE;
extern int32_t PRED_RECOG;
extern int32_t CAPT_RECOG;
extern int32_t PIG_RECOG;
extern int32_t RECO_ROAM;
extern int32_t RECO_RECOG;
extern int32_t RECO_ATTACK;
extern int32_t RECO_PAIN;
extern int32_t DRON_RECOG;
extern int32_t COMM_RECOG;
extern int32_t OCTA_RECOG;
extern int32_t TURR_RECOG;
extern int32_t SLIM_DYING;
extern int32_t BOS3_RECOG;
extern int32_t BOS1_WALK;
extern int32_t THUD;
extern int32_t WIERDSHOT_FLY;
extern int32_t SLIM_ROAM;
extern int32_t SHOTGUN_COCK;
extern int32_t GENERIC_AMBIENCE17;
extern int32_t BONUS_SPEECH1;
extern int32_t BONUS_SPEECH2;
extern int32_t BONUS_SPEECH3;
extern int32_t BONUS_SPEECH4;
extern int32_t DUKE_LAND_HURT;
extern int32_t DUKE_SEARCH2;
extern int32_t DUKE_CRACK2;
extern int32_t DUKE_SEARCH;
extern int32_t DUKE_GET;
extern int32_t DUKE_LONGTERM_PAIN;
extern int32_t MONITOR_ACTIVE;
extern int32_t NITEVISION_ONOFF;
extern int32_t DUKE_CRACK_FIRST;
extern int32_t DUKE_USEMEDKIT;
extern int32_t DUKE_TAKEPILLS;
extern int32_t DUKE_PISSRELIEF;
extern int32_t SELECT_WEAPON;
extern int32_t JIBBED_ACTOR5;
extern int32_t JIBBED_ACTOR6;
extern int32_t DUKE_GOTHEALTHATLOW;
extern int32_t BOSSTALKTODUKE;
extern int32_t WAR_AMBIENCE2;
extern int32_t EXITMENUSOUND;
extern int32_t FLY_BY;
extern int32_t DUKE_SCREAM;
extern int32_t SHRINKER_HIT;
extern int32_t RATTY;
extern int32_t BONUSMUSIC;
extern int32_t ALIEN_SWITCH1;
extern int32_t RIPHEADNECK;
extern int32_t ENDSEQVOL3SND4;
extern int32_t ENDSEQVOL3SND5;
extern int32_t ENDSEQVOL3SND6;
extern int32_t ENDSEQVOL3SND7;
extern int32_t ENDSEQVOL3SND8;
extern int32_t ENDSEQVOL3SND9;
extern int32_t WHIPYOURASS;
extern int32_t ENDSEQVOL2SND1;
extern int32_t ENDSEQVOL2SND2;
extern int32_t ENDSEQVOL2SND3;
extern int32_t ENDSEQVOL2SND4;
extern int32_t ENDSEQVOL2SND5;
extern int32_t ENDSEQVOL2SND6;
extern int32_t ENDSEQVOL2SND7;
extern int32_t SOMETHINGFROZE;
extern int32_t WIND_REPEAT;
extern int32_t BOS4_RECOG;
extern int32_t LIGHTNING_SLAP;
extern int32_t THUNDER;
extern int32_t INTRO4_1;
extern int32_t INTRO4_2;
extern int32_t INTRO4_3;
extern int32_t INTRO4_4;
extern int32_t INTRO4_5;
extern int32_t INTRO4_6;
extern int32_t BOSS4_DEADSPEECH;
extern int32_t BOSS4_FIRSTSEE;
extern int32_t VOL4ENDSND1;
extern int32_t VOL4ENDSND2;
extern int32_t EXPANDERSHOOT;
extern int32_t INTRO4_B;
extern int32_t BIGBANG;

#define DYNAMICSOUNDMAP(Soundnum) (DynamicSoundMap[Soundnum])

#else  /* if !defined DYNSOUNDREMAP_ENABLE */

#define G_ProcessDynamicSoundMapping(x, y) ((void)(0))

#define initsoundhashnames() ((void)0)
#define freesoundhashnames() ((void)0)

#include "soundefs.h"

#define DYNAMICSOUNDMAP(Soundnum) (Soundnum)

#endif