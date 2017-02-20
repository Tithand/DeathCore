/*
 * Copyright (C) 2016-2017 DeathCore <http://www.noffearrdeathproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
    
/* Zone Pandaren */
void AddSC_zone_pandaren();
void AddSC_zone_isle_of_giants();

/* Gate of the Setting Sun */
void AddSC_instance_gate_setting_sun();
void AddSC_gate_setting_sun();
void AddSC_boss_commander_rimok();
void AddSC_boss_raigonn();
void AddSC_boss_saboteur_kiptilak();
void AddSC_boss_striker_gadok();


// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddPandariaScripts()
{
    /* Zone Pandaren */
    AddSC_zone_pandaren();
    AddSC_zone_isle_of_giants();

    /* Gate of the Setting Sun */
    AddSC_instance_gate_setting_sun();
    AddSC_gate_setting_sun();
    AddSC_boss_commander_rimok();
    AddSC_boss_raigonn();
    AddSC_boss_saboteur_kiptilak();
    AddSC_boss_striker_gadok();
}
