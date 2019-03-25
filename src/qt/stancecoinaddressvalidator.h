// Copyright (c) 2011-2014 The Stancecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STANCECOIN_QT_STANCECOINADDRESSVALIDATOR_H
#define STANCECOIN_QT_STANCECOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class StancecoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StancecoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Stancecoin address widget validator, checks for a valid stancecoin address.
 */
class StancecoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StancecoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // STANCECOIN_QT_STANCECOINADDRESSVALIDATOR_H
