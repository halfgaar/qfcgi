/**
 * This file is part of QFCgi.
 *
 * QFCgi is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * QFCgi is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with QFCgi. If not, see <http://www.gnu.org/licenses/>.
 */

#include <QBuffer>

#include "connection.h"
#include "request.h"

QFCgiRequest::QFCgiRequest(int id, bool keepConn, QFCgiConnection *parent) : QObject(parent) {
  this->id = id;
  this->keepConn = keepConn;
  this->params = new QBuffer(this);
}

int QFCgiRequest::getId() const {
  return this->id;
}

bool QFCgiRequest::keepConnection() const {
  return this->keepConn;
}
