/* Copyright (C) 2006 - 2010 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: pit_of_saron
SD%Complete: 0%
SDComment:
SDCategory: Pit of Saron
EndScriptData */

#include "precompiled.h"
#include "def_pit.h"

struct npc_jaina_or_sylvanas_POSintroAI : public ScriptedAI
{
   npc_jaina_or_sylvanas_POSintroAI(Creature *pCreature) : ScriptedAI(pCreature)
   {
        m_pInstance = (ScriptedInstance*)pCreature->GetInstanceData();
        Reset();
   }

   ScriptedInstance* m_pInstance;

   void Reset()
   {
   }
};

struct npc_jaina_or_sylvanas_POSoutroAI : public ScriptedAI
{
   npc_jaina_or_sylvanas_POSoutroAI(Creature *pCreature) : ScriptedAI(pCreature)
   {
        m_pInstance = (ScriptedInstance*)pCreature->GetInstanceData();
        Reset();
   }

   ScriptedInstance* m_pInstance;

   void Reset()
   {
   }
};

CreatureAI* GetAI_npc_jaina_or_sylvanas_POSintro(Creature* pCreature)
{
    return new npc_jaina_or_sylvanas_POSintroAI(pCreature);
}

CreatureAI* GetAI_npc_jaina_or_sylvanas_POSoutro(Creature* pCreature)
{
    return new npc_jaina_or_sylvanas_POSoutroAI(pCreature);
}

void AddSC_pit_of_saron()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name="npc_jaina_or_sylvanas_POSintro";
    newscript->GetAI = &GetAI_npc_jaina_or_sylvanas_POSintro;
    newscript->RegisterSelf();

    newscript = new Script;
    newscript->Name="npc_jaina_or_sylvana_POSoutro";
    newscript->GetAI = &GetAI_npc_jaina_or_sylvanas_POSoutro;
    newscript->RegisterSelf();
}
