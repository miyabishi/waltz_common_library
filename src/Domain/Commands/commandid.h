#ifndef COMMANDID_H
#define COMMANDID_H

#include <QString>
#include "../../../waltzcommonlibrary_global.h"

namespace waltz
{
    namespace common
    {
        namespace Commands
        {
            class WALTZCOMMONLIBRARYSHARED_EXPORT CommandId
            {
            public:
                CommandId(const QString& aValue);
                CommandId(const CommandId& aOther);
                CommandId& operator=(const CommandId& aOther);
                bool operator==(const CommandId& aOther) const;
                bool operator!=(const CommandId& aOther) const;

            public:
                QString value() const;

            private:
                QString mValue_;
            };

        } // namespace Communicator
    } // namespace common
} // namespace waltz

#endif // COMMANDID_H
