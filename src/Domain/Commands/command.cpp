#include "command.h"

using namespace waltz::common::Commands;

Command::Command(const CommandId& aCommandId)
    :mCommandId_(aCommandId)
{
}

Command::~Command()
{
}

bool Command::commandIdEquals(const CommandId& aCommandId)
{
    return (aCommandId == mCommandId_);
}


bool Command::operator==(Command& aOther)
{
    return mCommandId_ == aOther.mCommandId_;
}
