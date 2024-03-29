#pragma once

#include <string>


class IStatistics
{
public:
	virtual ~IStatistics() {};

	virtual void		update(double t_next) = 0;
	virtual double		eval() const = 0;
	virtual std::string	name() const = 0;
};
