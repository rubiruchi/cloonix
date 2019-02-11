/*****************************************************************************/
/*    Copyright (C) 2006-2019 cloonix@cloonix.net License AGPL-3             */
/*                                                                           */
/*  This program is free software: you can redistribute it and/or modify     */
/*  it under the terms of the GNU Affero General Public License as           */
/*  published by the Free Software Foundation, either version 3 of the       */
/*  License, or (at your option) any later version.                          */
/*                                                                           */
/*  This program is distributed in the hope that it will be useful,          */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of           */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            */
/*  GNU Affero General Public License for more details.a                     */
/*                                                                           */
/*  You should have received a copy of the GNU Affero General Public License */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.    */
/*                                                                           */
/*****************************************************************************/
typedef void (*t_cb_end_automate)(void *data, int status, char *nm);
void automates_init(void);
/*---------------------------------------------------------------------------*/
void auto_self_destruction(int llid, int tid);
/*---------------------------------------------------------------------------*/
void check_for_work_dir_inexistance(t_cb_end_automate cb);
/*---------------------------------------------------------------------------*/
void automates_safety_heartbeat(void);
/*---------------------------------------------------------------------------*/
void inc_lock_self_destruction_dir(void);
void dec_lock_self_destruction_dir(void);
int get_lock_self_destruction_dir(void);

int get_glob_req_self_destruction(void);

/*---------------------------------------------------------------------------*/











