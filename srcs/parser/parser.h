/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:57:09 by lcardiga          #+#    #+#             */
/*   Updated: 2022/11/17 02:57:11 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

//Parsing
void	ft_parse_params(t_data *data, int *gnl, int fd);
void	ft_parse_rgb(t_data *data, char ***tmp, int *op, int i);
void	ft_check_map(t_data *data);

#endif
