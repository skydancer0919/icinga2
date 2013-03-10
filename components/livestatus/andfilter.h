/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef ANDFILTER_H
#define ANDFILTER_H

namespace livestatus
{

/**
 * @ingroup livestatus
 */
class AndFilter : public Filter
{
public:
	typedef shared_ptr<AndFilter> Ptr;
	typedef weak_ptr<AndFilter> WeakPtr;

	AndFilter(void);

	virtual bool Apply(const Object::Ptr& object);

	void AddSubFilter(const Filter::Ptr& filter);

private:
	vector<Filter::Ptr> m_Filters;
};

}

#endif /* ANDFILTER_H */
