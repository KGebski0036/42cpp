/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:21:21 by kgebski           #+#    #+#             */
/*   Updated: 2023/07/05 18:23:25 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137),  _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : 
AForm(original.getName(), original.getSignLevel(), original.getExecuteLevel()),
_target(original._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
	_target = original._target;
	return *this;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file;
	file.open (_target + "_shrubbery");
	file
		<< "              _{\\ _{\\{\\/}/}/}__\n"
		<< "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
		<< "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
		<< "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
		<< "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
		<< "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
		<< "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
		<< "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
		<< "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
		<< "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
		<< "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
		<< "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
		<< "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
		<< "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
		<< "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
		<< "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
		<< "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
		<< "              {){/ {\\/}{\\/} \\}\\}\n"
		<< "              (_)  \\.-'.-/\n"
		<< "          __...--- |'-.-'| --...__\n"
		<< "   _...--    .-'   |'-.-'|  ' -.  --..__\n"
		<< " -    ' .  . '     |.'-._| '  . .  '   \n"
		<< " .  '-  '    .--'  | '-.'|    .  '  . '\n"
		<< "          ' ..     |'-_.-|\n"
		<< "  .  '  .       _.-|-._ -|-._  .  '  .\n"
		<< "              .'   |'- .-|   '.\n"
		<< "  ..-'   ' .  '.   `-._.-�   .'  '  - .\n"
		<< "   .-' '        '-._______.-'     '  .;\n";
	file.close();
}

std::string ShrubberyCreationForm::getTarget() const { return _target; }

ShrubberyCreationForm::~ShrubberyCreationForm() {}
