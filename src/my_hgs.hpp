#include <vector>
#include <string>

/**
* https://github.com/vidalt/HGS-CVRP
 * thanks Vidal T. N. for sharing this code
*/

/**
 * Now this code only uses very little of the whole function
 */

void HGS(const std::string &pathInstance,
         bool verbose,
         int seed,
         double timeLimit,
         std::vector<std::vector<int>> &sol,
         double &ub);