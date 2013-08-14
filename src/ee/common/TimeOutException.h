/* This file is part of VoltDB.
 * Copyright (C) 2008-2013 VoltDB Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with VoltDB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TIMEOUTEXCEPTION_H_
#define TIMEOUTEXCEPTION_H_

#include "common/SerializableEEException.h"

namespace voltdb {
class ReferenceSerializeOutput;

class TimeOutException : public SerializableEEException {
public:

    TimeOutException(std::string message);
    virtual ~TimeOutException() {}

protected:
    void p_serialize(ReferenceSerializeOutput *output) const;
private:
};
}

#endif /* TIMEOUTEXCEPTION_H_ */