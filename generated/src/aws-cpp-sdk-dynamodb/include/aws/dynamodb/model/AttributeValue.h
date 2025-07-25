﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
class AttributeValueValue;

enum class ValueType {STRING, NUMBER, BYTEBUFFER, STRING_SET, NUMBER_SET, BYTEBUFFER_SET, ATTRIBUTE_MAP, ATTRIBUTE_LIST, BOOL, NULLVALUE};

/// http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_AttributeValue.html
class AWS_DYNAMODB_API AttributeValue
{
public:
    AttributeValue() {};
    explicit AttributeValue(const Aws::String& s) { SetS(s); }
    explicit AttributeValue(const Aws::Vector<Aws::String>& ss) { SetSS(ss); }
    AttributeValue(Aws::Utils::Json::JsonView jsonValue) { *this = jsonValue; }

    /// returns the String value if the value is specialized to this type, otherwise an empty String
    const Aws::String GetS() const;
    /// if already specialized to a String, sets the value to this String
    /// if uninitialized, specializes the type to a String with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetS(const Aws::String& s);
    /// if uninitialized, specializes the type to a String with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetS(const char* n) { return SetS(Aws::String(n)); }

    /// returns the Number value if the value is specialized to this type, otherwise an empty String
    const Aws::String GetN() const;
    /// if already specialized to a Number, sets the value to this Number
    /// if uninitialized, specializes the type to a Number with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetN(const Aws::String& n);
    /// if already specialized to a Number, sets the value to this Number
    /// if uninitialized, specializes the type to a Number with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetN(const char* n) { return SetN(Aws::String(n)); }
    /// if already specialized to a Number, sets the value to this Number
    /// if uninitialized, specializes the type to a Number with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetN(const int nItem) { return SetN(Aws::String(std::to_string(nItem).c_str())); }
    /// if already specialized to a Number, sets the value to this Number
    /// if uninitialized, specializes the type to a Number with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetN(const float nItem) { return SetN(Aws::String(std::to_string(nItem).c_str())); }
    /// if already specialized to a Number, sets the value to this Number
    /// if uninitialized, specializes the type to a Number with specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetN(const double nItem) { return SetN(Aws::String(std::to_string(nItem).c_str())); }

    /// returns the ByteBuffer if the value is specialized to this type, otherwise an empty Buffer
    const Aws::Utils::ByteBuffer GetB() const;
    /// returns a reference to the ByteBuffer if the value is specialized to this type, otherwise a reference to an empty Buffer
    const Aws::Utils::ByteBuffer& AccessB() const;
    /// if already specialized to a ByteBuffer, sets the value to this value
    /// if uninitialized, specializes the type to a ByteBuffer with the specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetB(const Aws::Utils::ByteBuffer& b);

    /// returns the String Vector if the value is specialized to this type, otherwise an empty Vector
    const Aws::Vector<Aws::String> GetSS() const;
    /// if already specialized to a String Set, sets to these values
    /// if uninitialized, specializes the type to a String Set with specified values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetSS(const Aws::Vector<Aws::String>& ss);
    /// if the value is already specialized to a String Set then this value is appended
    /// if uninitialized, specializes the type to a String Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddSItem(const Aws::String& sItem);
    /// if the value is already specialized to a String Set then this value is appended
    /// if uninitialized, specializes the type to a String Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddSItem(const char* sItem) { return AddSItem(Aws::String(sItem)); }

    /// returns the Number Vector if the value is specialized to this type, otherwise an empty Vector
    const Aws::Vector<Aws::String> GetNS() const;
    /// if already specialized to a Number Set, sets to these values
    /// if uninitialized, specializes the type to a Number Set with specified values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetNS(const Aws::Vector<Aws::String>& ns);
    /// if the value is already specialized to a Number Set then this value is appended
    /// if uninitialized, specializes the type to a Number Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddNItem(const Aws::String& nItem);
    /// if the value is already specialized to a Number Set then this value is appended
    /// if uninitialized, specializes the type to a Number Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddNItem(const char* nItem) { return AddNItem(Aws::String(nItem)); }

    /// returns the ByteBuffer Vector if the value is specialized to this type, otherwise an empty Vector
    const Aws::Vector<Aws::Utils::ByteBuffer> GetBS() const;
    /// if already specialized to a ByteBuffer Set, sets to these values
    /// if uninitialized, specializes the type to a ByteBuffer Set with specified values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetBS(const Aws::Vector<Aws::Utils::ByteBuffer>& bs);
    /// if the value is already specialized to a ByteBuffer Set then this value is appended
    /// if uninitialized, specializes the type to a ByteBuffer Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddBItem(const Aws::Utils::ByteBuffer& bItem);
    /// if the value is already specialized to a ByteBuffer Set then this value is appended
    /// if uninitialized, specializes the type to a ByteBuffer Set with this initial value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddBItem(const unsigned char* bItem, size_t size);

    /// returns the Attribute Map if the value is specialized to this type, otherwise an empty Map
    const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> GetM() const;
    /// if already specialized to an Attribute Map, sets to these values
    /// if uninitialized, specializes the type to an Attribute Map with specified values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetM(const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& map);
    /// if the value is already specialized to a Map then this value is inserted
    /// if uninitialized, specializes the type to a Map with these initial values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddMEntry(const Aws::String& key, const std::shared_ptr<AttributeValue>& value);
    /// if the value is already specialized to a Map then this value is inserted
    /// if uninitialized, specializes the type to a Map with these initial values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddMEntry(const char* key, const std::shared_ptr<AttributeValue>& value) { return AddMEntry(Aws::String(key), value); }

    /// returns the Attribute List if the value is specialized to this type, otherwise an empty Vector
    const Aws::Vector<std::shared_ptr<AttributeValue>> GetL() const;
    /// if already specialized to an Attribute List, sets to these values
    /// if uninitialized, specializes the type to an Attribute List with specified values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetL(const Aws::Vector<std::shared_ptr<AttributeValue>>& list);
    /// if the value is already specialized to a List then this value is appended
    /// if uninitialized, specializes the type to a List with these initial values
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& AddLItem(const std::shared_ptr<AttributeValue>& listItem);

    /// returns the boolean if the value is specialized to this type, otherwise false
    bool GetBool() const;
    /// if already specialized to a boolean, sets to this value
    /// if uninitialized, specializes the type to a boolean with the specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetBool(bool value);

    /// returns Null-Set-Value if the value is specialized to this type, otherwise false
    bool GetNull() const;
    /// if already specialized to a Null, sets to this value
    /// if uninitialized, specializes the type to Null with the specified value
    /// if already specialized to another type then the behavior is undefined
    AttributeValue& SetNull(bool value);

    AttributeValue& operator = (Aws::Utils::Json::JsonView);

    bool operator == (const AttributeValue& other) const;
    inline bool operator != (const AttributeValue& other) const { return !(*this == other); }

    Aws::String SerializeAttribute() const;
    Aws::Utils::Json::JsonValue Jsonize() const;
    ValueType GetType() const;

private:
    std::shared_ptr<AttributeValueValue> m_value;
};

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
