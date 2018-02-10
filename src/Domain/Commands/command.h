#ifndef COMMAND_H
#define COMMAND_H

#include <memory>
#include "commandid.h"
#include "../../../waltzcommonlibrary_global.h"


namespace waltz
{
    namespace common
    {
        namespace Commands
        {
            class Parameters;
            class WALTZCOMMONLIBRARYSHARED_EXPORT Command
            {
            public:
                explicit Command(const CommandId& aCommandId);
                virtual ~Command();
                bool operator==(Command& aOther);
                bool commandIdEquals(CommandId aCommandId);

            public:
                virtual void exec(const Parameters& aParameters) = 0;

            private:
                CommandId  mCommandId_;

            private:
                Command(const Command& aOther);
                Command& operator=(const Command& aOther);
            };
            typedef std::shared_ptr<Command>(CommandPointer);
        } // namespace Commands
    } // namespace editor
} // namespace waltz

#endif // COMMAND_H
