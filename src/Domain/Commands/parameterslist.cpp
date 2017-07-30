#include "parameterslist.h"

using namespace waltz::common::Commands;

ParametersList::ParametersList()
{
}

ParametersList::ParametersList(const QJsonArray& aArray)
{
    foreach(const QJsonValue& jsonValue, aArray)
    {
        mParametersList_.append(jsonValue.toArray());
    }
}

ParametersList::ParametersList(const ParametersList &aOther)
    :mParametersList_(aOther.mParametersList_)
{
}

ParametersList& ParametersList::operator=(const ParametersList &aOther)
{
    mParametersList_ = aOther.mParametersList_;
    return (*this);
}

void ParametersList::append(const Parameters aParameters)
{
    mParametersList_.append(aParameters);
}

QJsonArray ParametersList::toJsonArray() const
{
    QJsonArray jsonArray;
    foreach (const Parameters parameters, mParametersList_)
    {
        jsonArray.append(parameters.toJsonArray());
    }
    return jsonArray;
}

int ParametersList::size() const
{
    return mParametersList_.size();
}

Parameters ParametersList::at(int aIndex) const
{
    return mParametersList_.at(aIndex);
}
