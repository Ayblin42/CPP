/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:19:35 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/17 20:26:34 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const std::string &name);
        MateriaSource (const MateriaSource&other);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource&rhs);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria* _Materia[4];
};
