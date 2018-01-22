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
                explict WaltzSongFile(const QString& aFilePath);
                void save(const QVariantMap& aData) const;
                QVariantMap load() const;

            private:
                QString mFilePath_;

            private:
                WaltzSongFile(const WaltzSonfFile& aOther);
                WaltzSongFile operator=(const WaltzSonfFile& aOther);
            };
        } // namespace ExternalFile
    } // namespace editor
} // namespace waltz

#endif // WALTZSONGFILE_H
