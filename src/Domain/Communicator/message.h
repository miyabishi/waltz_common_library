#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QByteArray>
#include "../Commands/commandid.h"
#include "../Commands/parameters.h"
#include "../../../waltzcommonlibrary_global.h"

namespace waltz
{
    namespace common
    {
        namespace Communicator
        {
            class  WALTZCOMMONLIBRARYSHARED_EXPORT Message
            {
            public:
                Message(const waltz::common::Commands::CommandId& aCommandId,
                        const waltz::common::Commands::Parameters& aParameters);
                Message(const Message& aOther);
                Message& operator=(const Message& aOther);

            public:
                QByteArray toByteArray() const;

            private:
                waltz::common::Commands::CommandId  mCommandId_;
                waltz::common::Commands::Parameters mParameters_;
            };
        } // namespace Communicator
    } // namespace editor
} // namespace waltz

#endif // MESSAGE_H
