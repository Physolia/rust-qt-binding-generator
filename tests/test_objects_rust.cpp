/* generated by rust_qt_binding_generator */
#include "test_objects_rust.h"

namespace {
    template <typename T>
    struct option {
    public:
        T value;
        bool some;
        operator QVariant() const {
            if (some) {
                return QVariant(value);
            }
            return QVariant();
        }
    };
    struct qbytearray_t {
    private:
        const char* data;
        int len;
    public:
        qbytearray_t(const QByteArray& v):
            data(v.data()),
            len(v.size()) {
        }
        operator QByteArray() const {
            return QByteArray(data, len);
        }
    };
    struct qstring_t {
    private:
        const void* data;
        int len;
    public:
        qstring_t(const QString& v):
            data(static_cast<const void*>(v.utf16())),
            len(v.size()) {
        }
        operator QString() const {
            return QString::fromUtf8(static_cast<const char*>(data), len);
        }
    };
    struct qmodelindex_t {
        int row;
        quintptr id;
    };
    inline void innerObjectDescriptionChanged(InnerObject* o)
    {
        emit o->descriptionChanged();
    }

}
typedef void (*qstring_set)(QString*, qstring_t*);
void set_qstring(QString* v, qstring_t* val) {
    *v = *val;
}
typedef void (*qbytearray_set)(QByteArray*, qbytearray_t*);
void set_qbytearray(QByteArray* v, qbytearray_t* val) {
    *v = *val;
}
extern "C" {
    Group::Private* group_new(Group*, Person*, InnerObject*, void (*)(InnerObject*));
    void group_free(Group::Private*);
    Person::Private* group_person_get(const Group::Private*);
};

extern "C" {
    InnerObject::Private* inner_object_new(InnerObject*, void (*)(InnerObject*));
    void inner_object_free(InnerObject::Private*);
    void inner_object_description_get(const InnerObject::Private*, QString*, qstring_set);
    void inner_object_description_set(InnerObject::Private*, qstring_t);
};

extern "C" {
    Person::Private* person_new(Person*, InnerObject*, void (*)(InnerObject*));
    void person_free(Person::Private*);
    InnerObject::Private* person_object_get(const Person::Private*);
};

Group::Group(bool /*owned*/, QObject *parent):
    QObject(parent),
    m_person(new Person(false, this)),
    m_d(0),
    m_ownsPrivate(false)
{
}

Group::Group(QObject *parent):
    QObject(parent),
    m_person(new Person(false, this)),
    m_d(group_new(this, m_person, m_person->m_object,
        innerObjectDescriptionChanged)),
    m_ownsPrivate(true)
{
    m_person->m_object->m_d = person_object_get(m_person->m_d);
    m_person->m_d = group_person_get(m_d);
}

Group::~Group() {
    if (m_ownsPrivate) {
        group_free(m_d);
    }
}
const Person* Group::person() const
{
    return m_person;
}
Person* Group::person()
{
    return m_person;
}
InnerObject::InnerObject(bool /*owned*/, QObject *parent):
    QObject(parent),
    m_d(0),
    m_ownsPrivate(false)
{
}

InnerObject::InnerObject(QObject *parent):
    QObject(parent),
    m_d(inner_object_new(this,
        innerObjectDescriptionChanged)),
    m_ownsPrivate(true)
{
}

InnerObject::~InnerObject() {
    if (m_ownsPrivate) {
        inner_object_free(m_d);
    }
}
QString InnerObject::description() const
{
    QString v;
    inner_object_description_get(m_d, &v, set_qstring);
    return v;
}
void InnerObject::setDescription(const QString& v) {
    inner_object_description_set(m_d, v);
}
Person::Person(bool /*owned*/, QObject *parent):
    QObject(parent),
    m_object(new InnerObject(false, this)),
    m_d(0),
    m_ownsPrivate(false)
{
}

Person::Person(QObject *parent):
    QObject(parent),
    m_object(new InnerObject(false, this)),
    m_d(person_new(this, m_object,
        innerObjectDescriptionChanged)),
    m_ownsPrivate(true)
{
    m_object->m_d = person_object_get(m_d);
}

Person::~Person() {
    if (m_ownsPrivate) {
        person_free(m_d);
    }
}
const InnerObject* Person::object() const
{
    return m_object;
}
InnerObject* Person::object()
{
    return m_object;
}
