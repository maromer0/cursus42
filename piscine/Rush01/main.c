/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:10:24 by maromero          #+#    #+#             */
/*   Updated: 2022/07/18 17:56:43 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_errorcheck(int argc, char *argv);

int	main(int argc, char *argv[])
{
	int	error;

	error = ft_errorcheck(argc, argv[1]);
	
	return (error);
}
