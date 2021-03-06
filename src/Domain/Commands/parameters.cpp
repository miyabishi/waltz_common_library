#include <QJsonValue>
#include <QJsonObject>
#include "parameters.h"

using namespace waltz::common::Commands;

Parameters::Parameters()
{
}

Parameters::Parameters(const QJsonArray &aArray)
{
    foreach(const QJsonValue& jsonValue, aArray)
    {
        QJsonObject jsonObject = jsonValue.toObject();
        append(Parameter(jsonObject.value(PARAMETER_KEY_NAME).toString(),
                         jsonObject.value(PARAMETER_KEY_VALUE)));
    }
}

Parameters::Parameters(const Parameters& aOther)
    : mParameters_(aOther.mParameters_)
{
}

Parameters& Parameters::operator=(const Parameters& aOther)
{
    mParameters_ = aOther.mParameters_;
    return (*this);
}

void Parameters::append(const Parameter &aParameter)
{
    mParameters_[aParameter.name()] = aParameter;
}

QJsonArray Parameters::toJsonArray() const
{
    QJsonArray jsonArray;

    foreach(const Parameter& parameter, mParameters_.values())
    {
        jsonArray.append(parameter.toJsonValue());
    }
    return jsonArray;
}

Parameter Parameters::find(const QString& aParameterName) const
{
    return mParameters_.value(aParameterName, Parameter("",QJsonValue()));
}
