#include "command.h"

using namespace waltz::common::Commands;

Command::Command(const CommandId& aCommandId)
    :mCommandId_(aCommandId)
{
}

Command::~Command()
{
}

bool Command::operator==(Command& aOther)
{
    return mCommandId_ == aOther.mCommandId_;
}