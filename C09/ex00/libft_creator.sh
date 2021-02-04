# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsogalho <lsogalho@42.student.pt>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:23:52 by lsogalho          #+#    #+#              #
#    Updated: 2021/02/04 16:27:41 by lsogalho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -name "*.o" -type f -delete