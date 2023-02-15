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

Once you sign on, you should be able to see the ``system dashboard``, as shown in :numref:`System-Dashboard`.

.. figure:: /_static/System-Dashboard.png
    :name: System-Dashboard

    Example of system dashboard.

The Risk Tool is used for multiple projects at NOIRLab --- you can limit the information shown by selecting ``Rubin Operations``.

.. Note::
   Your access to risks, reports, etc. is limited to only your project/program/service and you will also have read-only access to NOIRLab directorate risks.

   If you need to acquire access to any other risk register, contact NOIRLab system administrators.

.. figure:: /_static/ATS-Projects.png
    :name: ATS-Projects

    List of projects that use the Risk Tool.

The Risk Tool is comprised of three ``tracks`` which are associated with managing the risks --- ``risks``, ``responses`` and ``actions``.
Users navigate through each track independently by either viewing the ``system dashboard`` (set up by administrators) or a ``personal main menu`` for each track (configured by your profile settings).
Additionally, there is a ``personal dashboard``.

:numref:`Main-Header-Bar` describes basic navigation within the webapp, where :ref:`the menu buttons <Menu-Button-Table>` are applied to the active track.

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
     - List Risks/Responses/Actions.
   * - .. figure:: /_static/New-Button.png
     - Create new Risk/Responses/Actions.
   * - .. figure:: /_static/Report-Button.png
     - Create or generate reports of Risks/Response Plans/Actions.
   * - .. figure:: /_static/Filter-Button.png
     - Create or apply filters to Risks/Responses/Actions.

:numref:`Risk-Track-List` is an example of a main menu, specifically the "Risk" track.

.. figure:: /_static/Risk-Track-List.png
    :name: Risk-Track-List

    Example of main menu, specifically for the "Risk" track.

There are separate main menus for each track:

Risks
	A risk can be categorized as an ``opportunity`` or a ``threat``.

	The Project Management Institute (PMI) defines a risk in the `Project Management Body of Knowledge (PMBOK) Guide <https://www.pmi.org/pmbok-guide-standards/foundational/pmbok>` |reg| as an "uncertain event or condition that, if it occurs, has a positive or negative effect on a project’s objectives."

Responses
	Responses are strategic process(es) controlling identified risks, whereby the stakeholders decide how to deal with each risk be it opportunities or threats.

Actions
	Actions are reactions to a realized risk.


.. _Use-and-Navigation-Filters-Reports:

Filters and Reports
===================

Within the Risk Tool, :ref:`filters <Use-and-Navigation-Filters>` and :ref:`reports <Use-and-Navigation-reports>` are different features.
Filters and sorting can be utilized for a track’s main menu, displaying group(s) of sorted rows, showing a customized list of field headers.
Reports are generated lists, summaries, matrices and charts to capture a snapshot or trending information of sorted and/or filtered items within a track.

This user guide will not go into depth about setting up filters or reports; however, a few basic examples are provided.

.. _Use-and-Navigation-Filters:

Filters
-------

Filters and sorting can be utilized for a track’s main menu, displaying group(s) of sorted rows, showing a customized list of field headers.
There are ``system filters`` (set up by administrators) and ``user filters``.

:numref:`Filter-Menu` is an example of the Filter menu available from the main header bar.
Clicking the modify button on a system filter allows a user to start creating a user filter starting from the same criteria.

.. figure:: /_static/Filter-Menu.png
    :name: Filter-Menu

    Description of filter selection menu.

Follow these steps to create a filter for risks assigned to a specific department:

  1. Ensure you're on the Risk Track by ensuring "Risks" is displayed in the upper-left of the main header bar.
  2. Click the magnifying glass button in the main header bar, then click the plus (``+``) button to start creating a user filter.

  .. Note::
     The ``Sections/Tabs`` are defined by the collapsible sections within a risk/response/action, and the ``Fields`` are entry fields under the respective section.

  3. Set ``Sections/Tabs`` to ``All Fields``, and ``Fields`` to ``Risk Department``.

     A new section should appear on the page with the available filter criteria for this field --- in this case, a list of the departments.

  .. Note::
     You can hold the SHIFT, CTRL or |clover| when clicking to select more than one criteria.

  4. Select the department(s) for the filter criteria by clicking it so it is highlighted.

     After selecting the filter criteria, the ``Filter Definition`` section will update with the selection.
  5. Name the filter appropriately in ``Filter Name`` field, then click ``Save and Run`` or ``Run (No Save)`` to apply the filter.
  6. If saved, this filter will be available under the ``User Filter Definitions`` in the Filter menu of the main header bar.

.. _Use-and-Navigation-Reports:

Reports
-------

Reports are generated lists, summaries, matrices and charts to capture a snapshot or trending information of sorted and/or filtered items within a track.
Reports can be used on demand, in scheduled events such as daily emails, or as dashboard components, and report data can be exported in a variety of forms.

The Report menu is similar to :numref:`Filter-Menu`, except the "Go to..." search is replaced by the chart creation menu button.

Follow these steps to create a Quick Report (i.e., a list) of active risks sorted by Risk ID:

  1. Ensure you're on the Risk Track by ensuring "Risks" is displayed in the upper-left of the main header bar.
  2. Click the Reports button in the main header bar, then click the plus (``+``) button to start creating a user report.

  .. Note::
     Each collapsible section under ``Report Type`` (e.g., Quick Report, Trend Report) are different types of reports.

  3. Expand the ``Quick Report`` section under ``Report Type``.

  .. Note::
     The default filter typically excludes items which are not in an Active status.

     If items under another status are needed in a report, save a filter capturing the criteria, then select the filter in this drop-down menu.
     For example, using a filter with all statuses as a filter criteria will generate a report with all items.


  4. If needed, set a filter via ``Use Filter`` field.  

  .. Note::
     Each type of report includes different options.

  5. If needed, set the report's options available under the respective report type --- in this case, set the first ``Sort By`` field  to ``Risk ID``.

  .. Note::
     You can hold the SHIFT, CTRL or |clover| when clicking to select more than one criteria.

  6. Under the ``Column Preferences`` tab, use the ``Selected Columns`` and ``Add Column Field`` sections to add, remove, and reorder columns for the generated report.
  7. If needed, use the other tabs to arrange the report as you desire.
  8. Name the report appropriately in ``Report Name`` field, then click ``Save and Run`` or ``Run (No Save)`` to generate the report.
  9. If saved, you can generate a new report with the most current information in the database by clicking the report name under the ``User Report Definitions`` in the Reports menu of the main header bar.
