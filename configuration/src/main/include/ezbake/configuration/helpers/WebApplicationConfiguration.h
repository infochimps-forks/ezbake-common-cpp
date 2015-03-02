/*   Copyright (C) 2013-2015 Computer Sciences Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#ifndef EZBAKE_EZCONFIGURATION_HELPERS_WEBAPPLICATIONCONFIGURATION_H_
#define EZBAKE_EZCONFIGURATION_HELPERS_WEBAPPLICATIONCONFIGURATION_H_

#include <boost/shared_ptr.hpp>

#include "ezbake/configuration/helpers/BaseConfiguration.h"

namespace ezbake { namespace configuration { namespace helpers {

class WebApplicationConfiguration: public BaseConfiguration {
public:
    static ::boost::shared_ptr<WebApplicationConfiguration> fromConfiguration(
            const ::ezbake::configuration::EZConfiguration& configuration,
            const ::std::string& namespacePrefix = "");

    virtual ~WebApplicationConfiguration();

    ::std::string getExternalFacingDomain() const;
    ::std::string getMetricsRESTEndpoint() const;
    ::std::string getMetricsSiteId() const;

private:
    WebApplicationConfiguration(
            const ::ezbake::configuration::EZConfiguration& configuration,
            const ::std::string& namespacePrefix);
};

}}} // namespace ::ezbake::configuration::helpers

#endif /* EZBAKE_EZCONFIGURATION_HELPERS_WEBAPPLICATIONCONFIGURATION_H_ */
