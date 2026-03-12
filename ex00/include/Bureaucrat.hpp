/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:04:54 by soochoi           #+#    #+#             */
/*   Updated: 2026/03/12 17:22:00 by soochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	private:
		const std::string name_;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name);
		Bureaucrat(const Bureaucrat &copyObj);
		Bureaucrat&	operator=(const Bureaucrat &copyObj);
		~Bureaucrat();

		const std::string&	getName() const;
		const int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException : public std::exception
		{
			public:

		};
		class GradeTooLowException : public std::exception
		{
			public:
				void	report();
		};
};

#endif
