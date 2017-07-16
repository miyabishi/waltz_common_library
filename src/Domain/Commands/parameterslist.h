#ifndef PARAMETERSLIST_H
#define PARAMETERSLIST_H

#include <QList>
#include <QJsonArray>

#include "../../../waltzcommonlibrary_global.h"
#include "parameters.h"

namespace waltz
{
    namespace common
    {
        namespace Commands
        {
            class  WALTZCOMMONLIBRARYSHARED_EXPORT ParametersList
            {
            public:
                ParametersList();
                ParametersList(const QJsonArray& aArray);
                ParametersList(const ParametersList& aOther);
                ParametersList& operator=(const ParametersList& aOther);
            public:
                void append(const Parameters aParameters);
                QJsonArray toJsonArray() const;

            private:
                QList<Parameters> mParametersList_;
            };

        } // namespace Commands
    } // namespace common
} // namespace waltz

#endif // PARAMETERSLIST_H
