<?php
/**
 * Returns the rendered site slogan.
 *
 * @ingroup themeable
 */
function theme_izarra_site_slogan($variables) {
	return '<span class="site-slogan">' . $variables['site_slogan'] . '</span>';
}