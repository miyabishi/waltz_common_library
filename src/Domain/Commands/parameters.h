#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <QMap>
#include <QJsonArray>
#include "parameter.h"
#include "../../../waltzcommonlibrary_global.h"

namespace waltz
{
    namespace common
    {
        namespace Commands
        {
            class WALTZCOMMONLIBRARYSHARED_EXPORT Parameters
            {
            public:
                Parameters();
                Parameters(const Parameters& aOther);
                Parameters(const QJsonArray& aArray);
                Parameters& operator=(const Parameters& aOther);

            public:
                void append(const Parameter& aParameter);
                QJsonArray toJsonArray() const;
                Parameter find(const QString& aParameterName) const;

            private:
                QMap<QString, Parameter> mParameters_;
            };
        } // namespace Communicator
    } // namespace common
} // namespace waltz

#endif // PARAMETERS_H
