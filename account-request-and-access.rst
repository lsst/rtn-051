.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Account-Request-Access:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

##########################
Account Request and Access
##########################

.. This section should provide a brief, top-level description of the page.

Account request
===============

A NOIRLab email is needed to utilize the single sign-on (SSO), and the SSO is required to access the Risk Tool.

Sign on instructions
====================

Follow these steps to sign on with your NOIRLab SSO credentials:

1. This link will redirect you to the sign-in portal for accessing the risk tool: `<https://noirlab.alceatech.com>`__

2. The SSO sign on page will appear --- use your NOIRLab SSO username and password.

.. figure:: /_static/Sign-On-Page.png
    :name: Sign-On-Page

    Sign on webpage.

3. After signing on, you should be able to see the ``system dashboard``.

.. figure:: /_static/System-Dashboard.png

    Example system dashboard.

Logout instructions
===================

Follow these steps to logout:

1. Click your username on the main header bar, then select ``Logout``.

.. figure:: /_static/Logout.png
    :name: Logout

    Logging out.

2. Wait for the confirmation page shown below.

.. figure:: /_static/Logout-Success.png
    :name: Logout-Success

    Logout confirmation webpage.

3. Close your browser session (all tabs).
