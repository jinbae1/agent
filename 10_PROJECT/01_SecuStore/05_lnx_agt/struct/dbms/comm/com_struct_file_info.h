/*
 * Copyright (C) 2021-2026 ASHINi Corp. 
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; either 
 * version 3 of the License, or any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public 
 * License along with this program. If not, see <https://www.gnu.org/licenses/>.   
 *  
 * 
 */

#ifndef DB_FILE_INFO_H_4D39CDDB_PO_E289_4d56_9F98_FE42776F4467
#define DB_FILE_INFO_H_4D39CDDB_PO_E289_4d56_9F98_FE42776F4467


typedef struct _db_file_info
{
	_db_file_info()
	{
		
	}

	String				strName;
	String				strPath;
	String				strPublisher;
	String				strDescription;	
	String				strProductName;
	String				strVersion;
	String				strCopyRight;
	
	String				strHash;
	
	String				strSignPubSN;
	String				strSignPubName;
	String				strSignCntSN;
	String				strSignCntName;

}DB_FILE_INFO, *PDB_FILE_INFO;

typedef list<DB_FILE_INFO>				TListDBFileInfo;
typedef TListDBFileInfo::iterator		TListDBFileInfoItor;
//---------------------------------------------------------------------------

#endif //DB_FILE_INFO_H_4D39CDDB_PO_E289_4d56_9F98_FE42776F4467



