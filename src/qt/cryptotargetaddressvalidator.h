// Copyright (c) 2011-2014 The Cryptotarget developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CRYPTOTARGETADDRESSVALIDATOR_H
#define CRYPTOTARGETADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CryptotargetAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CryptotargetAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Cryptotarget address widget validator, checks for a valid cryptotarget address.
 */
class CryptotargetAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CryptotargetAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // CRYPTOTARGETADDRESSVALIDATOR_H
