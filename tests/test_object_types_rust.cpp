/* generated by rust_qt_binding_generator */
#include "test_object_types_rust.h"

namespace {

    struct option_bool {
    public:
        bool value;
        bool some;
        operator QVariant() const {
            if (some) {
                return QVariant::fromValue(value);
            }
            return QVariant();
        }
    };
    static_assert(std::is_pod<option_bool>::value, "option_bool must be a POD type.");

    struct option_quint64 {
    public:
        quint64 value;
        bool some;
        operator QVariant() const {
            if (some) {
                return QVariant::fromValue(value);
            }
            return QVariant();
        }
    };
    static_assert(std::is_pod<option_quint64>::value, "option_quint64 must be a POD type.");

    typedef void (*qstring_set)(QString* val, const char* utf8, int nbytes);
    void set_qstring(QString* val, const char* utf8, int nbytes) {
        *val = QString::fromUtf8(utf8, nbytes);
    }

    typedef void (*qbytearray_set)(QByteArray* val, const char* bytes, int nbytes);
    void set_qbytearray(QByteArray* v, const char* bytes, int nbytes) {
        if (v->isNull() && nbytes == 0) {
            *v = QByteArray(bytes, nbytes);
        } else {
            v->truncate(0);
            v->append(bytes, nbytes);
        }
    }
    inline void objectBooleanChanged(Object* o)
    {
        emit o->booleanChanged();
    }
    inline void objectBytearrayChanged(Object* o)
    {
        emit o->bytearrayChanged();
    }
    inline void objectF32Changed(Object* o)
    {
        emit o->f32Changed();
    }
    inline void objectF64Changed(Object* o)
    {
        emit o->f64Changed();
    }
    inline void objectI16Changed(Object* o)
    {
        emit o->i16Changed();
    }
    inline void objectI32Changed(Object* o)
    {
        emit o->i32Changed();
    }
    inline void objectI64Changed(Object* o)
    {
        emit o->i64Changed();
    }
    inline void objectI8Changed(Object* o)
    {
        emit o->i8Changed();
    }
    inline void objectOptionalBooleanChanged(Object* o)
    {
        emit o->optionalBooleanChanged();
    }
    inline void objectOptionalBytearrayChanged(Object* o)
    {
        emit o->optionalBytearrayChanged();
    }
    inline void objectOptionalStringChanged(Object* o)
    {
        emit o->optionalStringChanged();
    }
    inline void objectOptionalU64Changed(Object* o)
    {
        emit o->optionalU64Changed();
    }
    inline void objectStringChanged(Object* o)
    {
        emit o->stringChanged();
    }
    inline void objectStringByFunctionChanged(Object* o)
    {
        emit o->stringByFunctionChanged();
    }
    inline void objectU16Changed(Object* o)
    {
        emit o->u16Changed();
    }
    inline void objectU32Changed(Object* o)
    {
        emit o->u32Changed();
    }
    inline void objectU64Changed(Object* o)
    {
        emit o->u64Changed();
    }
    inline void objectU8Changed(Object* o)
    {
        emit o->u8Changed();
    }
}
extern "C" {
    Object::Private* object_new(Object*, void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*), void (*)(Object*));
    void object_free(Object::Private*);
    bool object_boolean_get(const Object::Private*);
    void object_boolean_set(Object::Private*, bool);
    void object_bytearray_get(const Object::Private*, QByteArray*, qbytearray_set);
    void object_bytearray_set(Object::Private*, const char* bytes, int len);
    float object_f32_get(const Object::Private*);
    void object_f32_set(Object::Private*, float);
    double object_f64_get(const Object::Private*);
    void object_f64_set(Object::Private*, double);
    qint16 object_i16_get(const Object::Private*);
    void object_i16_set(Object::Private*, qint16);
    qint32 object_i32_get(const Object::Private*);
    void object_i32_set(Object::Private*, qint32);
    qint64 object_i64_get(const Object::Private*);
    void object_i64_set(Object::Private*, qint64);
    qint8 object_i8_get(const Object::Private*);
    void object_i8_set(Object::Private*, qint8);
    option_bool object_optional_boolean_get(const Object::Private*);
    void object_optional_boolean_set(Object::Private*, bool);
    void object_optional_boolean_set_none(Object::Private*);
    void object_optional_bytearray_get(const Object::Private*, QByteArray*, qbytearray_set);
    void object_optional_bytearray_set(Object::Private*, const char* bytes, int len);
    void object_optional_bytearray_set_none(Object::Private*);
    void object_optional_string_get(const Object::Private*, QString*, qstring_set);
    void object_optional_string_set(Object::Private*, const ushort *str, int len);
    void object_optional_string_set_none(Object::Private*);
    option_quint64 object_optional_u64_get(const Object::Private*);
    void object_optional_u64_set(Object::Private*, quint64);
    void object_optional_u64_set_none(Object::Private*);
    void object_string_get(const Object::Private*, QString*, qstring_set);
    void object_string_set(Object::Private*, const ushort *str, int len);
    void object_string_by_function_get(const Object::Private*, QString*, qstring_set);
    void object_string_by_function_set(Object::Private*, const ushort *str, int len);
    quint16 object_u16_get(const Object::Private*);
    void object_u16_set(Object::Private*, quint16);
    quint32 object_u32_get(const Object::Private*);
    void object_u32_set(Object::Private*, quint32);
    quint64 object_u64_get(const Object::Private*);
    void object_u64_set(Object::Private*, quint64);
    quint8 object_u8_get(const Object::Private*);
    void object_u8_set(Object::Private*, quint8);
};

Object::Object(bool /*owned*/, QObject *parent):
    QObject(parent),
    m_d(nullptr),
    m_ownsPrivate(false)
{
}

Object::Object(QObject *parent):
    QObject(parent),
    m_d(object_new(this,
        objectBooleanChanged,
        objectBytearrayChanged,
        objectF32Changed,
        objectF64Changed,
        objectI16Changed,
        objectI32Changed,
        objectI64Changed,
        objectI8Changed,
        objectOptionalBooleanChanged,
        objectOptionalBytearrayChanged,
        objectOptionalStringChanged,
        objectOptionalU64Changed,
        objectStringChanged,
        objectStringByFunctionChanged,
        objectU16Changed,
        objectU32Changed,
        objectU64Changed,
        objectU8Changed)),
    m_ownsPrivate(true)
{
}

Object::~Object() {
    if (m_ownsPrivate) {
        object_free(m_d);
    }
}
bool Object::boolean() const
{
    return object_boolean_get(m_d);
}
void Object::setBoolean(bool v) {
    object_boolean_set(m_d, v);
}
QByteArray Object::bytearray() const
{
    QByteArray v;
    object_bytearray_get(m_d, &v, set_qbytearray);
    return v;
}
void Object::setBytearray(const QByteArray& v) {
    object_bytearray_set(m_d, v.data(), v.size());
}
float Object::f32() const
{
    return object_f32_get(m_d);
}
void Object::setF32(float v) {
    object_f32_set(m_d, v);
}
double Object::f64() const
{
    return object_f64_get(m_d);
}
void Object::setF64(double v) {
    object_f64_set(m_d, v);
}
qint16 Object::i16() const
{
    return object_i16_get(m_d);
}
void Object::setI16(qint16 v) {
    object_i16_set(m_d, v);
}
qint32 Object::i32() const
{
    return object_i32_get(m_d);
}
void Object::setI32(qint32 v) {
    object_i32_set(m_d, v);
}
qint64 Object::i64() const
{
    return object_i64_get(m_d);
}
void Object::setI64(qint64 v) {
    object_i64_set(m_d, v);
}
qint8 Object::i8() const
{
    return object_i8_get(m_d);
}
void Object::setI8(qint8 v) {
    object_i8_set(m_d, v);
}
QVariant Object::optionalBoolean() const
{
    QVariant v;
    auto r = object_optional_boolean_get(m_d);
    if (r.some) {
        v.setValue(r.value);
    }
    return r;
}
void Object::setOptionalBoolean(const QVariant& v) {
    if (v.isNull() || !v.canConvert<bool>()) {
        object_optional_boolean_set_none(m_d);
    } else {
        object_optional_boolean_set(m_d, v.value<bool>());
    }
}
QByteArray Object::optionalBytearray() const
{
    QByteArray v;
    object_optional_bytearray_get(m_d, &v, set_qbytearray);
    return v;
}
void Object::setOptionalBytearray(const QByteArray& v) {
    if (v.isNull()) {
        object_optional_bytearray_set_none(m_d);
    } else {
    object_optional_bytearray_set(m_d, v.data(), v.size());
    }
}
QString Object::optionalString() const
{
    QString v;
    object_optional_string_get(m_d, &v, set_qstring);
    return v;
}
void Object::setOptionalString(const QString& v) {
    if (v.isNull()) {
        object_optional_string_set_none(m_d);
    } else {
    object_optional_string_set(m_d, reinterpret_cast<const ushort*>(v.data()), v.size());
    }
}
QVariant Object::optionalU64() const
{
    QVariant v;
    auto r = object_optional_u64_get(m_d);
    if (r.some) {
        v.setValue(r.value);
    }
    return r;
}
void Object::setOptionalU64(const QVariant& v) {
    if (v.isNull() || !v.canConvert<quint64>()) {
        object_optional_u64_set_none(m_d);
    } else {
        object_optional_u64_set(m_d, v.value<quint64>());
    }
}
QString Object::string() const
{
    QString v;
    object_string_get(m_d, &v, set_qstring);
    return v;
}
void Object::setString(const QString& v) {
    object_string_set(m_d, reinterpret_cast<const ushort*>(v.data()), v.size());
}
QString Object::stringByFunction() const
{
    QString v;
    object_string_by_function_get(m_d, &v, set_qstring);
    return v;
}
void Object::setStringByFunction(const QString& v) {
    object_string_by_function_set(m_d, reinterpret_cast<const ushort*>(v.data()), v.size());
}
quint16 Object::u16() const
{
    return object_u16_get(m_d);
}
void Object::setU16(quint16 v) {
    object_u16_set(m_d, v);
}
quint32 Object::u32() const
{
    return object_u32_get(m_d);
}
void Object::setU32(quint32 v) {
    object_u32_set(m_d, v);
}
quint64 Object::u64() const
{
    return object_u64_get(m_d);
}
void Object::setU64(quint64 v) {
    object_u64_set(m_d, v);
}
quint8 Object::u8() const
{
    return object_u8_get(m_d);
}
void Object::setU8(quint8 v) {
    object_u8_set(m_d, v);
}
