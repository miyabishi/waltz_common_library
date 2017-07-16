#ifndef PARAMETER_H
#define PARAMETER_H
#include <QString>
#include <QJsonValue>
#include "../../../waltzcommonlibrary_global.h"


namespace waltz
{
    namespace common
    {
        namespace Commands
        {
            const QString PARAMETER_KEY_NAME("Name");
            const QString PARAMETER_KEY_VALUE("Value");
            class WALTZCOMMONLIBRARYSHARED_EXPORT Parameter
            {
            public:
                Parameter();
                Parameter(const QString& aName,
                        const QJsonValue& aValue);
                Parameter(const Parameter& aOther);
                Parameter& operator=(const Parameter& aOther);

            public:
                QJsonValue value() const;
                QString name() const;
                QJsonValue toJsonValue() const;

            private:
                QString  mName_;
                QJsonValue mValue_;
            };
        } // namespace Communicator
    } // namespace editor
} // namespace waltz

#endif // PARAMETER_H
