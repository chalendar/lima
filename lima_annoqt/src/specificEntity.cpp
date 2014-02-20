/*
 *    Copyright 2002-2013 CEA LIST
 * 
 *    This file is part of LIMA.
 * 
 *    LIMA is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Affero General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 * 
 *    LIMA is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Affero General Public License for more details.
 * 
 *    You should have received a copy of the GNU Affero General Public License
 *    along with LIMA.  If not, see <http://www.gnu.org/licenses/>
 */
/***************************************************************************
 *   Copyright (C) 2007 by CEA LIST / LVIC *
 *   Gael.de-Chalendar@cea.fr   *
 ***************************************************************************/

#include "specificEntity.h"

#include <QDebug>

SpecificEntity::SpecificEntity(quint32 pos, quint32 len, quint32 type, const QString& str, QObject* parent) :
  QObject(parent),
  m_position(pos),
  m_length(len),
  m_type(type),
  m_string(str)
{
}

SpecificEntity::SpecificEntity(const SpecificEntity& se) :
  QObject(),
  m_position(se.m_position),
  m_length(se.m_length),
  m_type(se.m_type),
  m_string(se.m_string)
{
}

SpecificEntity& SpecificEntity::operator=(const SpecificEntity& se)
{
  m_position = se.m_position;
  m_length = se.m_length;
  m_type = se.m_type;
  m_string = se.m_string;
  return *this;
}

void SpecificEntity::slotTriggered()
{
  qDebug() << "SpecificEntity::slotTriggered";
  emit triggered( this );
}
