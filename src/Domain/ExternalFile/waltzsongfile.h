#ifndef WALTZSONGFILE_H
#define WALTZSONGFILE_H

#include <QString>
#include <QVariantMap>

namespace waltz
{
    namespace editor
    {
        namespace ExternalFile
        {
            class WaltzSongFile
            {
            public:
                WaltzSongFile(const QString& aFilePath, const QVariantMap& aData);

            };
        } // namespace ExternalFile
    } // namespace editor
} // namespace waltz

#endif // WALTZSONGFILE_H
