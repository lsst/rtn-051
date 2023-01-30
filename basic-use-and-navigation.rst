.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Use-and-Navigation:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

##################
Use and Navigation
##################

.. This section should provide a brief, top-level description of the page.

This page includes basic navigation elements within the Risk Tool.


.. _Use-and-Navigation-Basics:

Basic Navigation
================

Once logged in, you should be able to see the system dashboard, as shown in :numref:`System-Dashboard`.
The Risk Tool is comprised of three ``tracks`` which are associated with managing the risks --- ``risks``, ``responses`` and ``actions``.
Users navigate through each track independently by either viewing the ``system dashboard`` (set up by administrators) or a ``personal main menu`` for each track (configured by your profile settings).
Additionally, there is a ``personal dashboard``.

:numref:`Main-Header-Bar` describes basic navigation within the webapp, where :ref:`the menu buttons <Menu-Button-Table>` are applied to the active track.
:numref:`Main-Menu` is an example of a main menu, specifically for the Risk track list.
There are separate main menus for each track.

.. figure:: /_static/System-Dashboard.png
    :name: System-Dashboard

    Example System Dashboard.

.. figure:: /_static/Main-Header-Bar.png
    :name: Main-Header-Bar

    Description of main header bar navigation.

.. _Menu-Button-Table:
.. list-table:: 
   :widths: auto
   :header-rows: 1

   * - Button
     - Description
   * - .. figure:: /_static/List-Button.png
     - List Risks/Response Plans/Actions
   * - .. figure:: /_static/New-Button.png
     - Create New Risk/Response Plan/Action
   * - .. figure:: /_static/Report-Button.png
     - Generate Report of Risks/Response Plans/Actions
   * - .. figure:: /_static/Filter-Button.png
     - Create Filter to View Risks/Response Plans/Actions

.. figure:: /_static/Main-Menu.png
    :name: Main-Menu

    The list main menu for the risk track.

The Risk Tool is used for multiple projects at NOIRLab --- you can limit the information shown by selecting ``Rubin Operations``.

.. note::
   Your access is limited to only your project/program/service and you will also have read-only access to NOIRLab directorate risks.
   If you wish to acquire access to any other risk register, contact `thiag.kumaraswamy@noirlab.edu <mailto:thiag.kumaraswamy@noirlab.edu>`_.

.. figure:: /_static/ATS-Projects.png
    :name: ATS-Projects

    List of projects that use the Risk Tool.

The tracks are:

Risks
	Risks are XXX.
	A risk can be categorized as an ``opportunity`` or a ``threat``.

Responses
	Responses are strategic process(es) controlling identified risks, whereby the stakeholders decide how to deal with each risk be it opportunities or threats.

Actions
	Actions are reactions to a realized risk.


.. _Use-and-Navigation-Filters-Reports:

Filters and Reports
===================

Within the Risk Tool, ``filters`` and ``reports`` are different features.
This user guide will not go into depth about setting up filters or reports; however, a few basic examples are provided.

Filters
-------

Filters and sorting can be utilized for a track’s main menu, displaying group(s) of sorted rows, showing a customized list of field headers.
There are ``system filters`` (set up by administrators) and ``user filters``.

:numref:`Filter-Menu` is an example of the filter selection menu available from the main header bar.
Clicking the modify button on a system filter allows a user to start creating a user filter starting from the same criteria.

.. figure:: /_static/Filter-Menu.png
    :name: Filter-Menu

    Description of filter selection menu. The report selection menu is similar except the "Go to..." search is replaced by the chart creation menu button.

Follow these steps to create a filter for risks assigned to a specific department:
  1. Ensure you're on the Risk Track by ensuring "Risks" is displayed in the upper-right of the main header bar.
  2. Click the spyglass in the main header bar, then click the plus (+) button to start creating a user filter.
  3. Set Sections/Tabs to "All Fields," then select "Risk Department" under Fields.
     A new section should appear with the available options for this field --- in this case, a list of the departments.

  .. Note::
     The ``Sections/Tabs`` are the collapsible sections within a risk/response/action, and the ``Fields`` are entries under the respective section.

  4. Select the department for the filter by clicking so it is highlighted.
     You can hold the CTRL or SHIFT button when clicking to select more than one criteria.
     After selecting one or multiple items, the ``Filter Definition`` section will update with the new filter criteria.
  5. Name the filter appropriately in ``Filter Name`` field, then click ``Save and Run`` or ``Run (No Save)`` to apply the filter.
  6. If saved, this filter will be available under the ``User Filter Definitions`` in the spyglass menu.

Reports
-------

Reports are generated lists, summaries, matrices and charts to capture a snapshot or trending information of sorted and/or filtered items within a track.
Reports can be used on demand, in scheduled events such as daily emails, or as dashboard components, and report data can be exported in a variety of forms.

.. Note::
   Produced reports will be restricted to the user’s access privileges.

Follow these steps to create a quick report (a list) of active risks sorted by Risk ID:
  1. Ensure you're on the Risk Track by ensuring "Risks" is displayed in the upper-right of the main header bar.
  2. Click the reports button in the main header bar, then click the plus (+) button to start creating a user report.

  .. Note::
     Each collapsible section (e.g., Quick Report, Trend Report) are different types of reports.

  3. If needed, set a filter via ``Use Filter``.

  .. Note::
     The default filter typically excludes all items which are not in an active status.

     If items under another status are needed in the report, save a filter capturing the criteria, then select the filter in this drop-down menu.
     For example, using a filter with all statuses will generate a report with all items.

  4. Set any heading or sorting criteria.
  5. Click the ``Column Preferences`` to add/remove/reorder columns for the report.
     You can hold the CTRL or SHIFT button when clicking to select more than one criteria.
  6. Name the report appropriately in ``Report Name`` field, then click ``Save and Run`` or ``Run (No Save)`` to generate the report.
  7. If saved, the criteria can be reutilized under the ``User Report Definitions`` in the reports menu.
     A new report will be generated with the most current information in the database.
