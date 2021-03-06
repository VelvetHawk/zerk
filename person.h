#ifndef PERSON_H
#define PERSON_H

#include <QMap>
#include <QString>
#include "item.h"

class Person
{
	public:
		// Constructors/destructors
		Person();
		// Functions
		virtual ~Person() = 0;
		virtual QString get_name() const = 0;
		virtual void set_name(const QString name) = 0;
		virtual QString get_description() const = 0;
		virtual void set_description(const QString description) = 0;
		virtual void add_item(Item *item) = 0;
		virtual Item* get_item(const QString name) = 0;
		virtual const QMap<QString, Item *>& get_items() const = 0;
		virtual bool has_item(const QString name) const = 0;
		virtual void remove_item(const QString name) = 0;
		virtual QString to_string() const = 0;

	protected:
		QString name;
		QString description;
		Item *items;
};

#endif // PERSON_H
