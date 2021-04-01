#pragma once
#include "base/Qv2rayBase.hpp"
namespace Qv2ray::components::route
{
    const inline QvConfig_Route emptyScheme;
    const inline QvConfig_Route noAdsScheme({ {}, { "geosite:category-ads-all" }, {} }, { {}, {}, {} }, "AsIs");

    /**
     * @brief The Qv2rayRouteScheme struct
     * @author DuckSoft <realducksoft@gmail.com>
     */
    struct Qv2rayRouteScheme : QvConfig_Route
    {
        Q_GADGET
        QJS_CONSTRUCTOR(Qv2rayRouteScheme)
        /**
         * @brief the name of the scheme.
         * @example "Untitled Scheme"
         */
        QJS_PROP(QString, name);
        /**
         * @brief the author of the scheme.
         * @example "DuckSoft <realducksoft@gmail.com>"
         */
        QJS_PROP(QString, author);
        /**
         * @brief details of this scheme.
         * @example "A scheme to bypass China mainland, while allowing bilibili to go through proxy."
         */
        QJS_PROP(QString, description);

        // M: all these fields are mandatory
        QJS_FUNCTION(F(name, author, description), B(QvConfig_Route));
    };
} // namespace Qv2ray::components::route

using namespace Qv2ray::components::route;
